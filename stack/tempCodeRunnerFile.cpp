
	{
		tp = s.top();
		s.pop();
		area_with_top = hist[tp] * (s.empty() ? i :
								i - s.top() - 1);

		if (max_area < area_with_top)
			max_area = area_with_top;
	}