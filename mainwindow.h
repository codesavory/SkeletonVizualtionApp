#pragma once
#ifndef WINDOW_H
#define WINDOW_H

#include <QOpenGLWindow>
#include <QOpenGLFunctions>

class Window : public QOpenGLWindow, protected QOpenGLFunctions
{
	Q_OBJECT //TODO: learn

// OpenGL Events
public:
	~Window();

	void initializeGL();
	void resizeGL(int width, int height);
	void paintGL();
	void teardownGL();

private:
	// private helpers
	void printContextInformation();
};

#endif // WINDOW_H