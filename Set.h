
template<typename K>
class Set
{
	private:

	class btnode
	{
		public:
		K key;
		btnode *left;
		btnode *right;

		btnode(const K& k)
		{
			key = k;
			left = nullptr;
			right = nullptr;
		}

		~btnode()
		{
			delete left;
			delete right;
		}

	};

	size_t _size;
	btnode * _data;

	public:

	Set()
	{
		_size = 0;
		_data = nullptr;
	}

	~Set()
	{
		clear();
	}

	bool empty() const
	{
		return _size == 0;
	}

	size_t size() const
	{
		return _size;
	}

	size_t count(const K& k) const
	{
		btnode *ptr = _data;
		while (ptr != nullptr)
		{
			if (ptr->key == k)
				return 1;
			if (ptr->key < k)
				ptr = ptr->right;
			else
				ptr = ptr->left;
		}
		return 0;

	}

	bool contains(const K& k) const
	{
		return count(k) != 0;
	}

	void clear()
	{
		delete _data;
		_size = 0;
	}

	void insert(const K& k)
	{
		if (_data == nullptr)
		{
			_data = new btnode(k);
		}
		else
		{
			btnode *ptr = _data;
			while (ptr != nullptr)
			{
				if (ptr->key == k)
					return;
				if (ptr->key < k)
				{
					// check right side
					if (ptr->right == nullptr)
					{
						// we found the leafnode
						btnode *node = new btnode(k);
						ptr->right = node;
						_size ++;
						return;
					}
					else
					{
						ptr = ptr->right;
					}
				}
				else
				{
					// check left side
					if (ptr->left == nullptr)
					{
						// we found the leafnode
						btnode *node = new btnode(k);
						ptr->left = node;
						_size ++;
						return;
					}
					else
					{
						ptr = ptr->left;
					}
				}
			}
		}
	}
};

