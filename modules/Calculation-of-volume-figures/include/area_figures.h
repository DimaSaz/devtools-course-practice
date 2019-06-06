// Copyright 2019 Sazanov Dima

#ifndef MODULES_AREA_FIGURES_INCLUDE_AREA_FIGURES_H_
#define MODULES_AREA_FIGURES_INCLUDE_AREA_FIGURES_H_

class AreaFigures {
public:
	static double ÑircleArea(double radius);
	static double RhombusArea(double side, double height);
	static double SquareArea(double length);
	static double RectangleArea(double length, double width);
	static double EquilTriangleArea(double height, double side);
	static double RightTriangleArea(double sideA, double sideB);
};

#endif  // MODULES_AREA_FIGURES_INCLUDE_AREA_FIGURES_H_