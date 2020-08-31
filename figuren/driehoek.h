#pragma once

class driehoek : public element {
private:
	punt A, B, C;
public:
	driehoek(punt const& P1, punt const& P2, punt const& P3, element* ptr);
	void print()const;
};
