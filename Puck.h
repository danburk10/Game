#ifndef PUCK_H_INCLUDED
#define PUCK_H_INCLUDED
class Puck {
	private:
		Point2d position;
		Velocity2d velocity;
		Mass mass;
	public:
		Puck(int x, int y, int velX, int velY);
		void hit(Force2d _force);
};
#endif // PUCK_H_INCLUDED