namespace testCpp
{

	class Rectangle
	{
	public:
		Rectangle(int width, int height) //constructor
		{
			this->width = width;
			this->height = height;
		}


		int get_width() const // 리턴값만 주고, 멤버변수를 수정 못한다? c#의 property와 비슷한가?
		{
			return width;
		}


		int get_height() const
		{
			return height;
		}

		void set_width(int width)
		{
			if (width > 0 && width <= 1000)
			{
				this->width = width;
			}
		}

		void set_height(int height)
		{
			if (height > 0 && height <= 2000)
			{
				this->height = height;
			}
		}

		int area() const
		{
			return width * height;
		}

		int perimeter() const
		{
			return (width + height) * 2;
		}

		bool is_square() const
		{
			return width == height;
		}


	private:
		int width;
		int height;

	};
}