#include <GL/freeglut.h>


void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);  
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT);  

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f); 
    glVertex2f(-0.5f, -0.5f);     // Vertex 1
    glVertex2f(0.5f, -0.5f);      // Vertex 2
    glVertex2f(0.5f, 0.5f);       // Vertex 3
    glVertex2f(-0.5f, 0.5f);      // Vertex 4
    glEnd();
    glFlush(); 
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);               
    glutInitDisplayMode(GLUT_SINGLE);   
    glutInitWindowSize(800, 600);       
    glutCreateWindow("Blue Square");    

    init();                   
    glutDisplayFunc(display); 
    
    glutMainLoop(); 
    return 0;
}
