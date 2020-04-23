#include <GL/gl.h>
#include <GL/glut.h>

inline void drawTree(float xpos)
{  
  glPushMatrix();
    glTranslatef(-0.95 + xpos, 0.0, 0.4);
    glScalef(0.6, 0.6, 0.6);

  glColor3f(0.019, 0.380, 0.176);

  glBegin(GL_TRIANGLES);
    glVertex3f(0.23592, 0.316205, -0.114874);
    glVertex3f(0.253092, 0.391415, -0.122066);
    glVertex3f(0.266267, 0.34525, -0.084376);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.20329, 0.446056, -0.21408);
    glVertex3f(0.241814, 0.435041, -0.173051);
    glVertex3f(0.212741, 0.394833, -0.202794);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.189501, 0.274256, -0.079238);
    glVertex3f(0.23592, 0.316205, -0.114874);
    glVertex3f(0.24076, 0.286548, -0.075417);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.20329, 0.446056, -0.21408);
    glVertex3f(0.169248, 0.475338, -0.235314);
    glVertex3f(0.15958, 0.506068, -0.19656);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.221918, 0.481029, -0.169763);
    glVertex3f(0.20329, 0.446056, -0.21408);
    glVertex3f(0.15958, 0.506068, -0.19656);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.18845, 0.383503, -0.239612);
    glVertex3f(0.20329, 0.446056, -0.21408);
    glVertex3f(0.212741, 0.394833, -0.202794);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.218203, 0.333622, 0.007685);
    glVertex3f(0.178132, 0.281467, -0.009687);
    glVertex3f(0.217287, 0.279954, -0.032743);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.16061, 0.556345, -0.053009);
    glVertex3f(0.124727, 0.534552, -0.027484);
    glVertex3f(0.174057, 0.482858, -0.03123);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.133444, 0.572714, -0.163675);
    glVertex3f(0.187447, 0.525227, -0.169118);
    glVertex3f(0.15958, 0.506068, -0.19656);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.169248, 0.475338, -0.235314);
    glVertex3f(0.160131, 0.432096, -0.259549);
    glVertex3f(0.125886, 0.478807, -0.241939);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.138385, 0.322964, -0.181327);
    glVertex3f(0.154183, 0.350507, -0.138325);
    glVertex3f(0.102699, 0.356328, -0.155679);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.112282, 0.322084, -0.234341);
    glVertex3f(0.17433, 0.337779, -0.213855);
    glVertex3f(0.138385, 0.322964, -0.181327);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.113697, 0.399785, -0.07963);
    glVertex3f(0.114181, 0.366378, -0.039364);
    glVertex3f(0.091126, 0.401458, -0.06003);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.109157, 0.515161, -0.20333);
    glVertex3f(0.15958, 0.506068, -0.19656);
    glVertex3f(0.125886, 0.478807, -0.241939);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.112282, 0.322084, -0.234341);
    glVertex3f(0.138385, 0.322964, -0.181327);
    glVertex3f(0.092951, 0.326773, -0.194412);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.154183, 0.350507, -0.138325);
    glVertex3f(0.107179, 0.397612, -0.128614);
    glVertex3f(0.102699, 0.356328, -0.155679);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.140677, 0.297126, -0.037898);
    glVertex3f(0.189501, 0.274256, -0.079238);
    glVertex3f(0.178132, 0.281467, -0.009687);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.138385, 0.322964, -0.181327);
    glVertex3f(0.195978, 0.352646, -0.17599);
    glVertex3f(0.154183, 0.350507, -0.138325);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.194113, 0.555516, -0.142262);
    glVertex3f(0.133444, 0.572714, -0.163675);
    glVertex3f(0.1795, 0.581262, -0.105072);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.194113, 0.555516, -0.142262);
    glVertex3f(0.187447, 0.525227, -0.169118);
    glVertex3f(0.133444, 0.572714, -0.163675);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.174057, 0.482858, -0.03123);
    glVertex3f(0.194618, 0.53391, -0.065144);
    glVertex3f(0.16061, 0.556345, -0.053009);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.194618, 0.53391, -0.065144);
    glVertex3f(0.1795, 0.581262, -0.105072);
    glVertex3f(0.16061, 0.556345, -0.053009);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.185429, 0.342966, 0.054405);
    glVertex3f(0.12306, 0.351239, 0.06971);
    glVertex3f(0.151621, 0.292799, 0.046944);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.161747, 0.471062, 0.00747);
    glVertex3f(0.142169, 0.436239, 0.038968);
    glVertex3f(0.183262, 0.432015, 0.00325);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.158368, 0.39864, 0.054406);
    glVertex3f(0.201979, 0.39263, 0.022223);
    glVertex3f(0.183262, 0.432015, 0.00325);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.151621, 0.292799, 0.046944);
    glVertex3f(0.178132, 0.281467, -0.009687);
    glVertex3f(0.18925, 0.29958, 0.035425);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.154183, 0.350507, -0.138325);
    glVertex3f(0.220029, 0.347834, -0.141862);
    glVertex3f(0.181558, 0.308669, -0.1213);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.136503, 0.329351, -0.086438);
    glVertex3f(0.189501, 0.274256, -0.079238);
    glVertex3f(0.140677, 0.297126, -0.037898);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.113697, 0.399785, -0.07963);
    glVertex3f(0.136503, 0.329351, -0.086438);
    glVertex3f(0.114181, 0.366378, -0.039364);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.113697, 0.399785, -0.07963);
    glVertex3f(0.129221, 0.383685, -0.109571);
    glVertex3f(0.136503, 0.329351, -0.086438);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.130429, 0.600437, -0.090015);
    glVertex3f(0.133444, 0.572714, -0.163675);
    glVertex3f(0.076321, 0.624125, -0.117923);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.02074, 0.280014, 0.028971);
    glVertex3f(0.05069, 0.282371, 0.003422);
    glVertex3f(0.054116, 0.292455, 0.055536);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.081379, 0.321528, 0.076581);
    glVertex3f(0.048273, 0.357796, 0.077602);
    glVertex3f(0.054116, 0.292455, 0.055536);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.004936, 0.425357, -0.272305);
    glVertex3f(0.057728, 0.43752, -0.248678);
    glVertex3f(0.041015, 0.378657, -0.269007);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.013899, 0.326218, 0.059492);
    glVertex3f(-0.032187, 0.359443, 0.054708);
    glVertex3f(-0.026545, 0.28998, 0.036345);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.018597, 0.401303, 0.051114);
    glVertex3f(-0.032187, 0.359443, 0.054708);
    glVertex3f(0.013899, 0.326218, 0.059492);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.075232, 0.371167, -0.273684);
    glVertex3f(0.052297, 0.327658, -0.243683);
    glVertex3f(0.041015, 0.378657, -0.269007);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.071329, 0.396897, -0.137985);
    glVertex3f(0.055909, 0.374291, -0.073341);
    glVertex3f(0.023587, 0.343074, -0.138993);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.063566, 0.344845, -0.186973);
    glVertex3f(0.092951, 0.326773, -0.194412);
    glVertex3f(0.102699, 0.356328, -0.155679);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.096409, 0.417395, -0.263556);
    glVertex3f(0.075232, 0.371167, -0.273684);
    glVertex3f(0.041015, 0.378657, -0.269007);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.084549, 0.551354, -0.005246);
    glVertex3f(0.09369, 0.601686, -0.057727);
    glVertex3f(0.051229, 0.587645, -0.032544);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.094379, 0.438614, 0.044064);
    glVertex3f(0.061324, 0.413769, 0.05844);
    glVertex3f(0.087454, 0.385495, 0.074928);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.116697, 0.400976, 0.058129);
    glVertex3f(0.094379, 0.438614, 0.044064);
    glVertex3f(0.087454, 0.385495, 0.074928);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.142169, 0.436239, 0.038968);
    glVertex3f(0.094379, 0.438614, 0.044064);
    glVertex3f(0.116697, 0.400976, 0.058129);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.130429, 0.600437, -0.090015);
    glVertex3f(0.09369, 0.601686, -0.057727);
    glVertex3f(0.124727, 0.534552, -0.027484);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.174057, 0.482858, -0.03123);
    glVertex3f(0.124727, 0.534552, -0.027484);
    glVertex3f(0.132495, 0.494498, 0.014382);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.158368, 0.39864, 0.054406);
    glVertex3f(0.142169, 0.436239, 0.038968);
    glVertex3f(0.116697, 0.400976, 0.058129);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.16061, 0.556345, -0.053009);
    glVertex3f(0.130429, 0.600437, -0.090015);
    glVertex3f(0.124727, 0.534552, -0.027484);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.130429, 0.600437, -0.090015);
    glVertex3f(0.076321, 0.624125, -0.117923);
    glVertex3f(0.09369, 0.601686, -0.057727);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.09369, 0.601686, -0.057727);
    glVertex3f(0.084549, 0.551354, -0.005246);
    glVertex3f(0.124727, 0.534552, -0.027484);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.089769, 0.502232, 0.015072);
    glVertex3f(0.094379, 0.438614, 0.044064);
    glVertex3f(0.132495, 0.494498, 0.014382);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.103272, 0.291488, 0.037553);
    glVertex3f(0.081379, 0.321528, 0.076581);
    glVertex3f(0.054116, 0.292455, 0.055536);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.053943, 0.444891, 0.024342);
    glVertex3f(0.094379, 0.438614, 0.044064);
    glVertex3f(0.089769, 0.502232, 0.015072);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.099743, 0.316479, -0.015867);
    glVertex3f(0.05069, 0.282371, 0.003422);
    glVertex3f(0.050865, 0.316099, -0.036255);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.061324, 0.413769, 0.05844);
    glVertex3f(0.094379, 0.438614, 0.044064);
    glVertex3f(0.053943, 0.444891, 0.024342);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.055909, 0.374291, -0.073341);
    glVertex3f(0.079134, 0.377326, -0.033273);
    glVertex3f(0.050865, 0.316099, -0.036255);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.010298, 0.546551, -0.175729);
    glVertex3f(0.039508, 0.598043, -0.164705);
    glVertex3f(0.065159, 0.56128, -0.19595);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.010298, 0.546551, -0.175729);
    glVertex3f(0.065159, 0.56128, -0.19595);
    glVertex3f(0.02909, 0.532907, -0.21634);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.032302, 0.474281, -0.240321);
    glVertex3f(0.024682, 0.4873, -0.238843);
    glVertex3f(-0.004936, 0.425357, -0.272305);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.040132, 0.339138, -0.138756);
    glVertex3f(0.023587, 0.343074, -0.138993);
    glVertex3f(-0.029435, 0.320968, -0.09268);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.023102, 0.534826, -0.115847);
    glVertex3f(-0.018365, 0.503319, -0.162509);
    glVertex3f(-0.049832, 0.5032, -0.134142);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.070079, 0.442453, -0.200599);
    glVertex3f(-0.061216, 0.43887, -0.245733);
    glVertex3f(-0.079619, 0.39089, -0.226232);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.07267, 0.392328, -0.148629);
    glVertex3f(-0.070079, 0.442453, -0.200599);
    glVertex3f(-0.071025, 0.357804, -0.185584);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.023102, 0.534826, -0.115847);
    glVertex3f(-0.049832, 0.5032, -0.134142);
    glVertex3f(-0.067569, 0.486677, -0.088172);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0297, 0.509865, -0.04443);
    glVertex3f(-0.023102, 0.534826, -0.115847);
    glVertex3f(-0.067569, 0.486677, -0.088172);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.020701, 0.297523, -0.215509);
    glVertex3f(-0.023534, 0.30896, -0.178501);
    glVertex3f(-0.052299, 0.3263, -0.230652);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.071025, 0.357804, -0.185584);
    glVertex3f(-0.052299, 0.3263, -0.230652);
    glVertex3f(-0.023534, 0.30896, -0.178501);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.08322, 0.416132, -0.092077);
    glVertex3f(-0.07267, 0.392328, -0.148629);
    glVertex3f(-0.066143, 0.350638, -0.090653);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.032187, 0.359443, 0.054708);
    glVertex3f(-0.035273, 0.430162, 0.026795);
    glVertex3f(-0.061532, 0.3916, 0.035494);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.062145, 0.306914, -0.050879);
    glVertex3f(-0.066143, 0.350638, -0.090653);
    glVertex3f(-0.029435, 0.320968, -0.09268);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.079261, 0.382166, -0.049865);
    glVertex3f(-0.062145, 0.306914, -0.050879);
    glVertex3f(-0.071982, 0.328475, 0.007631);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.058961, 0.447729, -0.033274);
    glVertex3f(-0.079261, 0.382166, -0.049865);
    glVertex3f(-0.072199, 0.409822, -0.000616);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.058961, 0.447729, -0.033274);
    glVertex3f(0.001319, 0.463397, 0.008954);
    glVertex3f(-0.0297, 0.509865, -0.04443);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.062145, 0.306914, -0.050879);
    glVertex3f(-0.006718, 0.287627, -0.063305);
    glVertex3f(-0.013336, 0.267319, -0.016705);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035273, 0.430162, 0.026795);
    glVertex3f(-0.058961, 0.447729, -0.033274);
    glVertex3f(-0.072199, 0.409822, -0.000616);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.071982, 0.328475, 0.007631);
    glVertex3f(-0.032187, 0.359443, 0.054708);
    glVertex3f(-0.061532, 0.3916, 0.035494);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.026545, 0.28998, 0.036345);
    glVertex3f(-0.032187, 0.359443, 0.054708);
    glVertex3f(-0.071982, 0.328475, 0.007631);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.062145, 0.306914, -0.050879);
    glVertex3f(-0.013336, 0.267319, -0.016705);
    glVertex3f(-0.071982, 0.328475, 0.007631);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.071982, 0.328475, 0.007631);
    glVertex3f(-0.013336, 0.267319, -0.016705);
    glVertex3f(-0.026545, 0.28998, 0.036345);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.067569, 0.486677, -0.088172);
    glVertex3f(-0.08322, 0.416132, -0.092077);
    glVertex3f(-0.058961, 0.447729, -0.033274);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.058961, 0.447729, -0.033274);
    glVertex3f(-0.08322, 0.416132, -0.092077);
    glVertex3f(-0.079261, 0.382166, -0.049865);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.049832, 0.5032, -0.134142);
    glVertex3f(-0.063813, 0.458533, -0.154028);
    glVertex3f(-0.067569, 0.486677, -0.088172);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.07267, 0.392328, -0.148629);
    glVertex3f(-0.040132, 0.339138, -0.138756);
    glVertex3f(-0.066143, 0.350638, -0.090653);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.032302, 0.474281, -0.240321);
    glVertex3f(-0.061216, 0.43887, -0.245733);
    glVertex3f(-0.070079, 0.442453, -0.200599);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.018365, 0.503319, -0.162509);
    glVertex3f(-0.014277, 0.500538, -0.194626);
    glVertex3f(-0.063813, 0.458533, -0.154028);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.014277, 0.500538, -0.194626);
    glVertex3f(-0.070079, 0.442453, -0.200599);
    glVertex3f(-0.063813, 0.458533, -0.154028);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.061216, 0.43887, -0.245733);
    glVertex3f(-0.004936, 0.425357, -0.272305);
    glVertex3f(-0.058068, 0.382029, -0.259342);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.004936, 0.425357, -0.272305);
    glVertex3f(-0.018135, 0.359653, -0.273136);
    glVertex3f(-0.058068, 0.382029, -0.259342);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.061216, 0.43887, -0.245733);
    glVertex3f(-0.032302, 0.474281, -0.240321);
    glVertex3f(-0.004936, 0.425357, -0.272305);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.049832, 0.5032, -0.134142);
    glVertex3f(-0.018365, 0.503319, -0.162509);
    glVertex3f(-0.063813, 0.458533, -0.154028);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.005706, 0.318322, -0.247193);
    glVertex3f(-0.052299, 0.3263, -0.230652);
    glVertex3f(-0.018135, 0.359653, -0.273136);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.032187, 0.359443, 0.054708);
    glVertex3f(0.018597, 0.401303, 0.051114);
    glVertex3f(-0.035273, 0.430162, 0.026795);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.020701, 0.297523, -0.215509);
    glVertex3f(-0.052299, 0.3263, -0.230652);
    glVertex3f(0.005706, 0.318322, -0.247193);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.013893, 0.595835, -0.112351);
    glVertex3f(0.010298, 0.546551, -0.175729);
    glVertex3f(-0.023102, 0.534826, -0.115847);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.010298, 0.546551, -0.175729);
    glVertex3f(-0.014277, 0.500538, -0.194626);
    glVertex3f(-0.018365, 0.503319, -0.162509);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.042774, 0.514152, 0.014738);
    glVertex3f(0.051229, 0.587645, -0.032544);
    glVertex3f(0.007439, 0.558504, -0.030742);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.048273, 0.357796, 0.077602);
    glVertex3f(0.013899, 0.326218, 0.059492);
    glVertex3f(0.054116, 0.292455, 0.055536);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.050865, 0.316099, -0.036255);
    glVertex3f(0.05069, 0.282371, 0.003422);
    glVertex3f(-0.013336, 0.267319, -0.016705);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.006718, 0.287627, -0.063305);
    glVertex3f(0.050865, 0.316099, -0.036255);
    glVertex3f(-0.013336, 0.267319, -0.016705);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.018921, 0.326867, -0.084126);
    glVertex3f(0.023587, 0.343074, -0.138993);
    glVertex3f(0.055909, 0.374291, -0.073341);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.001319, 0.463397, 0.008954);
    glVertex3f(-0.035273, 0.430162, 0.026795);
    glVertex3f(0.018597, 0.401303, 0.051114);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0297, 0.509865, -0.04443);
    glVertex3f(0.001077, 0.513841, -0.001296);
    glVertex3f(0.007439, 0.558504, -0.030742);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.048273, 0.357796, 0.077602);
    glVertex3f(0.018597, 0.401303, 0.051114);
    glVertex3f(0.013899, 0.326218, 0.059492);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.001077, 0.513841, -0.001296);
    glVertex3f(0.042774, 0.514152, 0.014738);
    glVertex3f(0.007439, 0.558504, -0.030742);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.0297, 0.509865, -0.04443);
    glVertex3f(0.007439, 0.558504, -0.030742);
    glVertex3f(-0.023102, 0.534826, -0.115847);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.018597, 0.401303, 0.051114);
    glVertex3f(0.061324, 0.413769, 0.05844);
    glVertex3f(0.053943, 0.444891, 0.024342);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.024682, 0.4873, -0.238843);
    glVertex3f(-0.032302, 0.474281, -0.240321);
    glVertex3f(-0.014277, 0.500538, -0.194626);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.023246, 0.31013, -0.193113);
    glVertex3f(0.023587, 0.343074, -0.138993);
    glVertex3f(-0.023534, 0.30896, -0.178501);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.013336, 0.267319, -0.016705);
    glVertex3f(0.02074, 0.280014, 0.028971);
    glVertex3f(-0.026545, 0.28998, 0.036345);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.018135, 0.359653, -0.273136);
    glVertex3f(0.041015, 0.378657, -0.269007);
    glVertex3f(0.005706, 0.318322, -0.247193);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.057728, 0.43752, -0.248678);
    glVertex3f(-0.004936, 0.425357, -0.272305);
    glVertex3f(0.024682, 0.4873, -0.238843);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.052297, 0.327658, -0.243683);
    glVertex3f(0.063566, 0.344845, -0.186973);
    glVertex3f(0.023246, 0.31013, -0.193113);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.076321, 0.624125, -0.117923);
    glVertex3f(0.039508, 0.598043, -0.164705);
    glVertex3f(0.013893, 0.595835, -0.112351);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.084498, 0.475805, -0.237596);
    glVertex3f(0.057728, 0.43752, -0.248678);
    glVertex3f(0.024682, 0.4873, -0.238843);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.069311, 0.521522, -0.226569);
    glVertex3f(0.084498, 0.475805, -0.237596);
    glVertex3f(0.024682, 0.4873, -0.238843);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.053943, 0.444891, 0.024342);
    glVertex3f(0.042774, 0.514152, 0.014738);
    glVertex3f(0.001319, 0.463397, 0.008954);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.02909, 0.532907, -0.21634);
    glVertex3f(0.065159, 0.56128, -0.19595);
    glVertex3f(0.069311, 0.521522, -0.226569);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.076321, 0.624125, -0.117923);
    glVertex3f(0.08436, 0.598858, -0.171304);
    glVertex3f(0.039508, 0.598043, -0.164705);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.055909, 0.374291, -0.073341);
    glVertex3f(0.071329, 0.396897, -0.137985);
    glVertex3f(0.091126, 0.401458, -0.06003);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.079134, 0.377326, -0.033273);
    glVertex3f(0.091126, 0.401458, -0.06003);
    glVertex3f(0.114181, 0.366378, -0.039364);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.079134, 0.377326, -0.033273);
    glVertex3f(0.099743, 0.316479, -0.015867);
    glVertex3f(0.050865, 0.316099, -0.036255);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.114181, 0.366378, -0.039364);
    glVertex3f(0.099743, 0.316479, -0.015867);
    glVertex3f(0.079134, 0.377326, -0.033273);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.096409, 0.417395, -0.263556);
    glVertex3f(0.110189, 0.358106, -0.266541);
    glVertex3f(0.075232, 0.371167, -0.273684);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.088515, 0.336576, -0.266531);
    glVertex3f(0.112282, 0.322084, -0.234341);
    glVertex3f(0.052297, 0.327658, -0.243683);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.065159, 0.56128, -0.19595);
    glVertex3f(0.133444, 0.572714, -0.163675);
    glVertex3f(0.109157, 0.515161, -0.20333);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.133444, 0.572714, -0.163675);
    glVertex3f(0.08436, 0.598858, -0.171304);
    glVertex3f(0.076321, 0.624125, -0.117923);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.096409, 0.417395, -0.263556);
    glVertex3f(0.146175, 0.362628, -0.259537);
    glVertex3f(0.110189, 0.358106, -0.266541);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.138385, 0.322964, -0.181327);
    glVertex3f(0.102699, 0.356328, -0.155679);
    glVertex3f(0.092951, 0.326773, -0.194412);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.103272, 0.291488, 0.037553);
    glVertex3f(0.132898, 0.280479, 0.004167);
    glVertex3f(0.151621, 0.292799, 0.046944);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.099743, 0.316479, -0.015867);
    glVertex3f(0.132898, 0.280479, 0.004167);
    glVertex3f(0.103272, 0.291488, 0.037553);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.140677, 0.297126, -0.037898);
    glVertex3f(0.099743, 0.316479, -0.015867);
    glVertex3f(0.114181, 0.366378, -0.039364);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.075473, 0.315622, -0.220943);
    glVertex3f(0.112282, 0.322084, -0.234341);
    glVertex3f(0.092951, 0.326773, -0.194412);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.088515, 0.336576, -0.266531);
    glVertex3f(0.075232, 0.371167, -0.273684);
    glVertex3f(0.110189, 0.358106, -0.266541);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.109157, 0.515161, -0.20333);
    glVertex3f(0.125886, 0.478807, -0.241939);
    glVertex3f(0.084498, 0.475805, -0.237596);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.088515, 0.336576, -0.266531);
    glVertex3f(0.110189, 0.358106, -0.266541);
    glVertex3f(0.112282, 0.322084, -0.234341);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.161747, 0.471062, 0.00747);
    glVertex3f(0.132495, 0.494498, 0.014382);
    glVertex3f(0.142169, 0.436239, 0.038968);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.133444, 0.572714, -0.163675);
    glVertex3f(0.15958, 0.506068, -0.19656);
    glVertex3f(0.109157, 0.515161, -0.20333);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.154183, 0.350507, -0.138325);
    glVertex3f(0.129221, 0.383685, -0.109571);
    glVertex3f(0.107179, 0.397612, -0.128614);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.169248, 0.475338, -0.235314);
    glVertex3f(0.125886, 0.478807, -0.241939);
    glVertex3f(0.15958, 0.506068, -0.19656);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.130429, 0.600437, -0.090015);
    glVertex3f(0.1795, 0.581262, -0.105072);
    glVertex3f(0.133444, 0.572714, -0.163675);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.231758, 0.44652, -0.047867);
    glVertex3f(0.214738, 0.476961, -0.068172);
    glVertex3f(0.174057, 0.482858, -0.03123);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.231758, 0.44652, -0.047867);
    glVertex3f(0.174057, 0.482858, -0.03123);
    glVertex3f(0.183262, 0.432015, 0.00325);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.218203, 0.333622, 0.007685);
    glVertex3f(0.185429, 0.342966, 0.054405);
    glVertex3f(0.18925, 0.29958, 0.035425);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.212741, 0.394833, -0.202794);
    glVertex3f(0.195978, 0.352646, -0.17599);
    glVertex3f(0.17433, 0.337779, -0.213855);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.217287, 0.279954, -0.032743);
    glVertex3f(0.24076, 0.286548, -0.075417);
    glVertex3f(0.250836, 0.309482, -0.036222);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.24076, 0.286548, -0.075417);
    glVertex3f(0.217287, 0.279954, -0.032743);
    glVertex3f(0.189501, 0.274256, -0.079238);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.266267, 0.34525, -0.084376);
    glVertex3f(0.262111, 0.360097, -0.033567);
    glVertex3f(0.250836, 0.309482, -0.036222);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.262111, 0.360097, -0.033567);
    glVertex3f(0.218203, 0.333622, 0.007685);
    glVertex3f(0.250836, 0.309482, -0.036222);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.2356, 0.40621, -0.011608);
    glVertex3f(0.218203, 0.333622, 0.007685);
    glVertex3f(0.262111, 0.360097, -0.033567);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.24076, 0.286548, -0.075417);
    glVertex3f(0.266267, 0.34525, -0.084376);
    glVertex3f(0.250836, 0.309482, -0.036222);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.262973, 0.408904, -0.065982);
    glVertex3f(0.2356, 0.40621, -0.011608);
    glVertex3f(0.262111, 0.360097, -0.033567);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.262111, 0.360097, -0.033567);
    glVertex3f(0.266267, 0.34525, -0.084376);
    glVertex3f(0.262973, 0.408904, -0.065982);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.2356, 0.40621, -0.011608);
    glVertex3f(0.201979, 0.39263, 0.022223);
    glVertex3f(0.218203, 0.333622, 0.007685);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.234011, 0.382821, -0.171308);
    glVertex3f(0.220029, 0.347834, -0.141862);
    glVertex3f(0.195978, 0.352646, -0.17599);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.15958, 0.506068, -0.19656);
    glVertex3f(0.187447, 0.525227, -0.169118);
    glVertex3f(0.221918, 0.481029, -0.169763);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.160131, 0.432096, -0.259549);
    glVertex3f(0.20329, 0.446056, -0.21408);
    glVertex3f(0.18845, 0.383503, -0.239612);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.160131, 0.432096, -0.259549);
    glVertex3f(0.169248, 0.475338, -0.235314);
    glVertex3f(0.20329, 0.446056, -0.21408);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.17433, 0.337779, -0.213855);
    glVertex3f(0.146175, 0.362628, -0.259537);
    glVertex3f(0.18845, 0.383503, -0.239612);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.219143, 0.507238, -0.116447);
    glVertex3f(0.1795, 0.581262, -0.105072);
    glVertex3f(0.194618, 0.53391, -0.065144);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.245553, 0.44654, -0.106586);
    glVertex3f(0.262973, 0.408904, -0.065982);
    glVertex3f(0.253092, 0.391415, -0.122066);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.220029, 0.347834, -0.141862);
    glVertex3f(0.253092, 0.391415, -0.122066);
    glVertex3f(0.23592, 0.316205, -0.114874);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.212741, 0.394833, -0.202794);
    glVertex3f(0.241814, 0.435041, -0.173051);
    glVertex3f(0.234011, 0.382821, -0.171308);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.221918, 0.481029, -0.169763);
    glVertex3f(0.219143, 0.507238, -0.116447);
    glVertex3f(0.245553, 0.44654, -0.106586);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.245553, 0.44654, -0.106586);
    glVertex3f(0.241814, 0.435041, -0.173051);
    glVertex3f(0.221918, 0.481029, -0.169763);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.241814, 0.435041, -0.173051);
    glVertex3f(0.245553, 0.44654, -0.106586);
    glVertex3f(0.253092, 0.391415, -0.122066);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.234011, 0.382821, -0.171308);
    glVertex3f(0.253092, 0.391415, -0.122066);
    glVertex3f(0.220029, 0.347834, -0.141862);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.24076, 0.286548, -0.075417);
    glVertex3f(0.23592, 0.316205, -0.114874);
    glVertex3f(0.266267, 0.34525, -0.084376);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.1795, 0.581262, -0.105072);
    glVertex3f(0.219143, 0.507238, -0.116447);
    glVertex3f(0.194113, 0.555516, -0.142262);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.18845, 0.383503, -0.239612);
    glVertex3f(0.212741, 0.394833, -0.202794);
    glVertex3f(0.17433, 0.337779, -0.213855);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.221918, 0.481029, -0.169763);
    glVertex3f(0.241814, 0.435041, -0.173051);
    glVertex3f(0.20329, 0.446056, -0.21408);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.194113, 0.555516, -0.142262);
    glVertex3f(0.219143, 0.507238, -0.116447);
    glVertex3f(0.187447, 0.525227, -0.169118);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.219143, 0.507238, -0.116447);
    glVertex3f(0.194618, 0.53391, -0.065144);
    glVertex3f(0.214738, 0.476961, -0.068172);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.16061, 0.556345, -0.053009);
    glVertex3f(0.1795, 0.581262, -0.105072);
    glVertex3f(0.130429, 0.600437, -0.090015);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.178132, 0.281467, -0.009687);
    glVertex3f(0.189501, 0.274256, -0.079238);
    glVertex3f(0.217287, 0.279954, -0.032743);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.158368, 0.39864, 0.054406);
    glVertex3f(0.183262, 0.432015, 0.00325);
    glVertex3f(0.142169, 0.436239, 0.038968);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.12306, 0.351239, 0.06971);
    glVertex3f(0.185429, 0.342966, 0.054405);
    glVertex3f(0.158368, 0.39864, 0.054406);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.201979, 0.39263, 0.022223);
    glVertex3f(0.2356, 0.40621, -0.011608);
    glVertex3f(0.183262, 0.432015, 0.00325);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.18925, 0.29958, 0.035425);
    glVertex3f(0.178132, 0.281467, -0.009687);
    glVertex3f(0.218203, 0.333622, 0.007685);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.220029, 0.347834, -0.141862);
    glVertex3f(0.23592, 0.316205, -0.114874);
    glVertex3f(0.181558, 0.308669, -0.1213);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.214738, 0.476961, -0.068172);
    glVertex3f(0.194618, 0.53391, -0.065144);
    glVertex3f(0.174057, 0.482858, -0.03123);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.185429, 0.342966, 0.054405);
    glVertex3f(0.201979, 0.39263, 0.022223);
    glVertex3f(0.158368, 0.39864, 0.054406);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.151621, 0.292799, 0.046944);
    glVertex3f(0.18925, 0.29958, 0.035425);
    glVertex3f(0.185429, 0.342966, 0.054405);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.183262, 0.432015, 0.00325);
    glVertex3f(0.174057, 0.482858, -0.03123);
    glVertex3f(0.161747, 0.471062, 0.00747);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.132898, 0.280479, 0.004167);
    glVertex3f(0.178132, 0.281467, -0.009687);
    glVertex3f(0.151621, 0.292799, 0.046944);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.195978, 0.352646, -0.17599);
    glVertex3f(0.220029, 0.347834, -0.141862);
    glVertex3f(0.154183, 0.350507, -0.138325);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.138385, 0.322964, -0.181327);
    glVertex3f(0.17433, 0.337779, -0.213855);
    glVertex3f(0.195978, 0.352646, -0.17599);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.136503, 0.329351, -0.086438);
    glVertex3f(0.181558, 0.308669, -0.1213);
    glVertex3f(0.189501, 0.274256, -0.079238);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.181558, 0.308669, -0.1213);
    glVertex3f(0.136503, 0.329351, -0.086438);
    glVertex3f(0.154183, 0.350507, -0.138325);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.071329, 0.396897, -0.137985);
    glVertex3f(0.107179, 0.397612, -0.128614);
    glVertex3f(0.113697, 0.399785, -0.07963);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.071329, 0.396897, -0.137985);
    glVertex3f(0.113697, 0.399785, -0.07963);
    glVertex3f(0.091126, 0.401458, -0.06003);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.075473, 0.315622, -0.220943);
    glVertex3f(0.092951, 0.326773, -0.194412);
    glVertex3f(0.063566, 0.344845, -0.186973);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.053943, 0.444891, 0.024342);
    glVertex3f(0.089769, 0.502232, 0.015072);
    glVertex3f(0.042774, 0.514152, 0.014738);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.041015, 0.378657, -0.269007);
    glVertex3f(0.052297, 0.327658, -0.243683);
    glVertex3f(0.005706, 0.318322, -0.247193);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.052297, 0.327658, -0.243683);
    glVertex3f(0.075473, 0.315622, -0.220943);
    glVertex3f(0.063566, 0.344845, -0.186973);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.023587, 0.343074, -0.138993);
    glVertex3f(0.063566, 0.344845, -0.186973);
    glVertex3f(0.071329, 0.396897, -0.137985);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.023246, 0.31013, -0.193113);
    glVertex3f(0.063566, 0.344845, -0.186973);
    glVertex3f(0.023587, 0.343074, -0.138993);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.050865, 0.316099, -0.036255);
    glVertex3f(-0.006718, 0.287627, -0.063305);
    glVertex3f(0.018921, 0.326867, -0.084126);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.018921, 0.326867, -0.084126);
    glVertex3f(0.055909, 0.374291, -0.073341);
    glVertex3f(0.050865, 0.316099, -0.036255);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.05069, 0.282371, 0.003422);
    glVertex3f(0.103272, 0.291488, 0.037553);
    glVertex3f(0.054116, 0.292455, 0.055536);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.048273, 0.357796, 0.077602);
    glVertex3f(0.087454, 0.385495, 0.074928);
    glVertex3f(0.061324, 0.413769, 0.05844);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.071329, 0.396897, -0.137985);
    glVertex3f(0.063566, 0.344845, -0.186973);
    glVertex3f(0.102699, 0.356328, -0.155679);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.071329, 0.396897, -0.137985);
    glVertex3f(0.102699, 0.356328, -0.155679);
    glVertex3f(0.107179, 0.397612, -0.128614);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.084498, 0.475805, -0.237596);
    glVertex3f(0.096409, 0.417395, -0.263556);
    glVertex3f(0.057728, 0.43752, -0.248678);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.12306, 0.351239, 0.06971);
    glVertex3f(0.116697, 0.400976, 0.058129);
    glVertex3f(0.087454, 0.385495, 0.074928);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.089769, 0.502232, 0.015072);
    glVertex3f(0.124727, 0.534552, -0.027484);
    glVertex3f(0.084549, 0.551354, -0.005246);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.132495, 0.494498, 0.014382);
    glVertex3f(0.124727, 0.534552, -0.027484);
    glVertex3f(0.089769, 0.502232, 0.015072);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.151621, 0.292799, 0.046944);
    glVertex3f(0.12306, 0.351239, 0.06971);
    glVertex3f(0.103272, 0.291488, 0.037553);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.116697, 0.400976, 0.058129);
    glVertex3f(0.12306, 0.351239, 0.06971);
    glVertex3f(0.158368, 0.39864, 0.054406);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.094379, 0.438614, 0.044064);
    glVertex3f(0.142169, 0.436239, 0.038968);
    glVertex3f(0.132495, 0.494498, 0.014382);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.12306, 0.351239, 0.06971);
    glVertex3f(0.081379, 0.321528, 0.076581);
    glVertex3f(0.103272, 0.291488, 0.037553);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.12306, 0.351239, 0.06971);
    glVertex3f(0.087454, 0.385495, 0.074928);
    glVertex3f(0.081379, 0.321528, 0.076581);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.042774, 0.514152, 0.014738);
    glVertex3f(0.089769, 0.502232, 0.015072);
    glVertex3f(0.084549, 0.551354, -0.005246);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.05069, 0.282371, 0.003422);
    glVertex3f(0.099743, 0.316479, -0.015867);
    glVertex3f(0.103272, 0.291488, 0.037553);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.02909, 0.532907, -0.21634);
    glVertex3f(0.024682, 0.4873, -0.238843);
    glVertex3f(-0.014277, 0.500538, -0.194626);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.020701, 0.297523, -0.215509);
    glVertex3f(0.005706, 0.318322, -0.247193);
    glVertex3f(0.023246, 0.31013, -0.193113);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.013893, 0.595835, -0.112351);
    glVertex3f(0.039508, 0.598043, -0.164705);
    glVertex3f(0.010298, 0.546551, -0.175729);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.029435, 0.320968, -0.09268);
    glVertex3f(0.023587, 0.343074, -0.138993);
    glVertex3f(0.018921, 0.326867, -0.084126);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.006718, 0.287627, -0.063305);
    glVertex3f(-0.029435, 0.320968, -0.09268);
    glVertex3f(0.018921, 0.326867, -0.084126);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.001319, 0.463397, 0.008954);
    glVertex3f(0.001077, 0.513841, -0.001296);
    glVertex3f(-0.0297, 0.509865, -0.04443);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.032302, 0.474281, -0.240321);
    glVertex3f(-0.070079, 0.442453, -0.200599);
    glVertex3f(-0.014277, 0.500538, -0.194626);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.07267, 0.392328, -0.148629);
    glVertex3f(-0.063813, 0.458533, -0.154028);
    glVertex3f(-0.070079, 0.442453, -0.200599);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.071025, 0.357804, -0.185584);
    glVertex3f(-0.079619, 0.39089, -0.226232);
    glVertex3f(-0.052299, 0.3263, -0.230652);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.071025, 0.357804, -0.185584);
    glVertex3f(-0.070079, 0.442453, -0.200599);
    glVertex3f(-0.079619, 0.39089, -0.226232);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.07267, 0.392328, -0.148629);
    glVertex3f(-0.071025, 0.357804, -0.185584);
    glVertex3f(-0.040132, 0.339138, -0.138756);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035273, 0.430162, 0.026795);
    glVertex3f(0.001319, 0.463397, 0.008954);
    glVertex3f(-0.058961, 0.447729, -0.033274);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.08322, 0.416132, -0.092077);
    glVertex3f(-0.063813, 0.458533, -0.154028);
    glVertex3f(-0.07267, 0.392328, -0.148629);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.072199, 0.409822, -0.000616);
    glVertex3f(-0.079261, 0.382166, -0.049865);
    glVertex3f(-0.071982, 0.328475, 0.007631);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.058961, 0.447729, -0.033274);
    glVertex3f(-0.0297, 0.509865, -0.04443);
    glVertex3f(-0.067569, 0.486677, -0.088172);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.035273, 0.430162, 0.026795);
    glVertex3f(-0.072199, 0.409822, -0.000616);
    glVertex3f(-0.061532, 0.3916, 0.035494);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.066143, 0.350638, -0.090653);
    glVertex3f(-0.079261, 0.382166, -0.049865);
    glVertex3f(-0.08322, 0.416132, -0.092077);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.062145, 0.306914, -0.050879);
    glVertex3f(-0.079261, 0.382166, -0.049865);
    glVertex3f(-0.066143, 0.350638, -0.090653);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.062145, 0.306914, -0.050879);
    glVertex3f(-0.029435, 0.320968, -0.09268);
    glVertex3f(-0.006718, 0.287627, -0.063305);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.071982, 0.328475, 0.007631);
    glVertex3f(-0.061532, 0.3916, 0.035494);
    glVertex3f(-0.072199, 0.409822, -0.000616);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.08322, 0.416132, -0.092077);
    glVertex3f(-0.067569, 0.486677, -0.088172);
    glVertex3f(-0.063813, 0.458533, -0.154028);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.066143, 0.350638, -0.090653);
    glVertex3f(-0.040132, 0.339138, -0.138756);
    glVertex3f(-0.029435, 0.320968, -0.09268);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.071025, 0.357804, -0.185584);
    glVertex3f(-0.023534, 0.30896, -0.178501);
    glVertex3f(-0.040132, 0.339138, -0.138756);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.079619, 0.39089, -0.226232);
    glVertex3f(-0.058068, 0.382029, -0.259342);
    glVertex3f(-0.052299, 0.3263, -0.230652);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.079619, 0.39089, -0.226232);
    glVertex3f(-0.061216, 0.43887, -0.245733);
    glVertex3f(-0.058068, 0.382029, -0.259342);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.052299, 0.3263, -0.230652);
    glVertex3f(-0.058068, 0.382029, -0.259342);
    glVertex3f(-0.018135, 0.359653, -0.273136);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.013893, 0.595835, -0.112351);
    glVertex3f(0.051229, 0.587645, -0.032544);
    glVertex3f(0.076321, 0.624125, -0.117923);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.013336, 0.267319, -0.016705);
    glVertex3f(0.05069, 0.282371, 0.003422);
    glVertex3f(0.02074, 0.280014, 0.028971);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.018597, 0.401303, 0.051114);
    glVertex3f(0.053943, 0.444891, 0.024342);
    glVertex3f(0.001319, 0.463397, 0.008954);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.001319, 0.463397, 0.008954);
    glVertex3f(0.042774, 0.514152, 0.014738);
    glVertex3f(0.001077, 0.513841, -0.001296);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.054116, 0.292455, 0.055536);
    glVertex3f(0.013899, 0.326218, 0.059492);
    glVertex3f(0.02074, 0.280014, 0.028971);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.051229, 0.587645, -0.032544);
    glVertex3f(0.013893, 0.595835, -0.112351);
    glVertex3f(0.007439, 0.558504, -0.030742);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.026545, 0.28998, 0.036345);
    glVertex3f(0.02074, 0.280014, 0.028971);
    glVertex3f(0.013899, 0.326218, 0.059492);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.048273, 0.357796, 0.077602);
    glVertex3f(0.061324, 0.413769, 0.05844);
    glVertex3f(0.018597, 0.401303, 0.051114);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.013893, 0.595835, -0.112351);
    glVertex3f(-0.023102, 0.534826, -0.115847);
    glVertex3f(0.007439, 0.558504, -0.030742);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.023534, 0.30896, -0.178501);
    glVertex3f(-0.020701, 0.297523, -0.215509);
    glVertex3f(0.023246, 0.31013, -0.193113);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.018365, 0.503319, -0.162509);
    glVertex3f(-0.023102, 0.534826, -0.115847);
    glVertex3f(0.010298, 0.546551, -0.175729);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.040132, 0.339138, -0.138756);
    glVertex3f(-0.023534, 0.30896, -0.178501);
    glVertex3f(0.023587, 0.343074, -0.138993);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.018135, 0.359653, -0.273136);
    glVertex3f(-0.004936, 0.425357, -0.272305);
    glVertex3f(0.041015, 0.378657, -0.269007);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.010298, 0.546551, -0.175729);
    glVertex3f(0.02909, 0.532907, -0.21634);
    glVertex3f(-0.014277, 0.500538, -0.194626);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.023246, 0.31013, -0.193113);
    glVertex3f(0.005706, 0.318322, -0.247193);
    glVertex3f(0.052297, 0.327658, -0.243683);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.02909, 0.532907, -0.21634);
    glVertex3f(0.069311, 0.521522, -0.226569);
    glVertex3f(0.024682, 0.4873, -0.238843);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.051229, 0.587645, -0.032544);
    glVertex3f(0.09369, 0.601686, -0.057727);
    glVertex3f(0.076321, 0.624125, -0.117923);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.042774, 0.514152, 0.014738);
    glVertex3f(0.084549, 0.551354, -0.005246);
    glVertex3f(0.051229, 0.587645, -0.032544);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.039508, 0.598043, -0.164705);
    glVertex3f(0.08436, 0.598858, -0.171304);
    glVertex3f(0.065159, 0.56128, -0.19595);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.057728, 0.43752, -0.248678);
    glVertex3f(0.096409, 0.417395, -0.263556);
    glVertex3f(0.041015, 0.378657, -0.269007);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.052297, 0.327658, -0.243683);
    glVertex3f(0.075232, 0.371167, -0.273684);
    glVertex3f(0.088515, 0.336576, -0.266531);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.055909, 0.374291, -0.073341);
    glVertex3f(0.091126, 0.401458, -0.06003);
    glVertex3f(0.079134, 0.377326, -0.033273);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.075473, 0.315622, -0.220943);
    glVertex3f(0.052297, 0.327658, -0.243683);
    glVertex3f(0.112282, 0.322084, -0.234341);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.065159, 0.56128, -0.19595);
    glVertex3f(0.109157, 0.515161, -0.20333);
    glVertex3f(0.069311, 0.521522, -0.226569);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.069311, 0.521522, -0.226569);
    glVertex3f(0.109157, 0.515161, -0.20333);
    glVertex3f(0.084498, 0.475805, -0.237596);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.065159, 0.56128, -0.19595);
    glVertex3f(0.08436, 0.598858, -0.171304);
    glVertex3f(0.133444, 0.572714, -0.163675);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.110189, 0.358106, -0.266541);
    glVertex3f(0.146175, 0.362628, -0.259537);
    glVertex3f(0.112282, 0.322084, -0.234341);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.140677, 0.297126, -0.037898);
    glVertex3f(0.178132, 0.281467, -0.009687);
    glVertex3f(0.132898, 0.280479, 0.004167);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.084498, 0.475805, -0.237596);
    glVertex3f(0.125886, 0.478807, -0.241939);
    glVertex3f(0.096409, 0.417395, -0.263556);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.113697, 0.399785, -0.07963);
    glVertex3f(0.107179, 0.397612, -0.128614);
    glVertex3f(0.129221, 0.383685, -0.109571);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.099743, 0.316479, -0.015867);
    glVertex3f(0.140677, 0.297126, -0.037898);
    glVertex3f(0.132898, 0.280479, 0.004167);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.140677, 0.297126, -0.037898);
    glVertex3f(0.114181, 0.366378, -0.039364);
    glVertex3f(0.136503, 0.329351, -0.086438);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.096409, 0.417395, -0.263556);
    glVertex3f(0.125886, 0.478807, -0.241939);
    glVertex3f(0.160131, 0.432096, -0.259549);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.096409, 0.417395, -0.263556);
    glVertex3f(0.160131, 0.432096, -0.259549);
    glVertex3f(0.146175, 0.362628, -0.259537);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.136503, 0.329351, -0.086438);
    glVertex3f(0.129221, 0.383685, -0.109571);
    glVertex3f(0.154183, 0.350507, -0.138325);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.112282, 0.322084, -0.234341);
    glVertex3f(0.146175, 0.362628, -0.259537);
    glVertex3f(0.17433, 0.337779, -0.213855);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.161747, 0.471062, 0.00747);
    glVertex3f(0.174057, 0.482858, -0.03123);
    glVertex3f(0.132495, 0.494498, 0.014382);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.218203, 0.333622, 0.007685);
    glVertex3f(0.201979, 0.39263, 0.022223);
    glVertex3f(0.185429, 0.342966, 0.054405);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.181558, 0.308669, -0.1213);
    glVertex3f(0.23592, 0.316205, -0.114874);
    glVertex3f(0.189501, 0.274256, -0.079238);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.217287, 0.279954, -0.032743);
    glVertex3f(0.250836, 0.309482, -0.036222);
    glVertex3f(0.218203, 0.333622, 0.007685);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.214738, 0.476961, -0.068172);
    glVertex3f(0.245553, 0.44654, -0.106586);
    glVertex3f(0.219143, 0.507238, -0.116447);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.2356, 0.40621, -0.011608);
    glVertex3f(0.262973, 0.408904, -0.065982);
    glVertex3f(0.231758, 0.44652, -0.047867);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.2356, 0.40621, -0.011608);
    glVertex3f(0.231758, 0.44652, -0.047867);
    glVertex3f(0.183262, 0.432015, 0.00325);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.146175, 0.362628, -0.259537);
    glVertex3f(0.160131, 0.432096, -0.259549);
    glVertex3f(0.18845, 0.383503, -0.239612);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.214738, 0.476961, -0.068172);
    glVertex3f(0.231758, 0.44652, -0.047867);
    glVertex3f(0.245553, 0.44654, -0.106586);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.231758, 0.44652, -0.047867);
    glVertex3f(0.262973, 0.408904, -0.065982);
    glVertex3f(0.245553, 0.44654, -0.106586);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.266267, 0.34525, -0.084376);
    glVertex3f(0.253092, 0.391415, -0.122066);
    glVertex3f(0.262973, 0.408904, -0.065982);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.195978, 0.352646, -0.17599);
    glVertex3f(0.212741, 0.394833, -0.202794);
    glVertex3f(0.234011, 0.382821, -0.171308);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.234011, 0.382821, -0.171308);
    glVertex3f(0.241814, 0.435041, -0.173051);
    glVertex3f(0.253092, 0.391415, -0.122066);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.187447, 0.525227, -0.169118);
    glVertex3f(0.219143, 0.507238, -0.116447);
    glVertex3f(0.221918, 0.481029, -0.169763);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.081379, 0.321528, 0.076581);
    glVertex3f(0.087454, 0.385495, 0.074928);
    glVertex3f(0.048273, 0.357796, 0.077602);
  glEnd();

  glColor3f(0.4, 0.258, 0.034);

  glBegin(GL_TRIANGLES);
    glVertex3f(0.115949, 0.226803, -0.101257);
    glVertex3f(0.111608, 0.255895, -0.127373);
    glVertex3f(0.119527, 0.268822, -0.102167);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.034943, 0.116242, -0.134861);
    glVertex3f(0.026118, 0.080584, -0.100344);
    glVertex3f(0.023213, 0.108548, -0.099877);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.077743, 0.088616, -0.157205);
    glVertex3f(0.036949, 0.063643, -0.148669);
    glVertex3f(0.039993, 0.086132, -0.13773);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.154682, 0.007554, -0.176255);
    glVertex3f(0.085412, 0.039374, -0.194173);
    glVertex3f(0.143565, 0.035131, -0.163226);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.079953, 0.007554, -0.215223);
    glVertex3f(0.023686, 0.028977, -0.163717);
    glVertex3f(0.085412, 0.039374, -0.194173);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.083043, 0.226325, -0.132524);
    glVertex3f(0.058398, 0.260636, -0.126456);
    glVertex3f(0.084091, 0.267276, -0.135655);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.052513, 0.222234, -0.100264);
    glVertex3f(0.058398, 0.260636, -0.126456);
    glVertex3f(0.060312, 0.221078, -0.123274);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.113626, 0.085855, -0.142373);
    glVertex3f(0.083077, 0.072757, -0.170905);
    glVertex3f(0.077743, 0.088616, -0.157205);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.155397, 0.007554, -0.02809);
    glVertex3f(0.085899, 0.033576, -0.012197);
    glVertex3f(0.076031, 0.007554, 0.011893);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.084666, 0.224094, -0.069335);
    glVertex3f(0.110901, 0.262798, -0.075464);
    glVertex3f(0.08511, 0.27131, -0.066977);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.102513, 0.164603, -0.07288);
    glVertex3f(0.084666, 0.224094, -0.069335);
    glVertex3f(0.076863, 0.163501, -0.057712);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.141324, 0.092572, -0.10491);
    glVertex3f(0.129851, 0.067247, -0.058314);
    glVertex3f(0.153822, 0.076607, -0.105625);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.075987, 0.111873, -0.050956);
    glVertex3f(0.046742, 0.076478, -0.065021);
    glVertex3f(0.080831, 0.082037, -0.048714);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.046559, 0.15537, -0.069725);
    glVertex3f(0.052513, 0.222234, -0.100264);
    glVertex3f(0.028519, 0.150466, -0.099694);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.154682, 0.007554, -0.176255);
    glVertex3f(0.17425, 0.044238, -0.105382);
    glVertex3f(0.197984, 0.007554, -0.101985);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.018245, 0.059193, -0.100932);
    glVertex3f(0.039993, 0.086132, -0.13773);
    glVertex3f(0.036949, 0.063643, -0.148669);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.080831, 0.082037, -0.048714);
    glVertex3f(0.043179, 0.058259, -0.056049);
    glVertex3f(0.08605, 0.064535, -0.035151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.126788, 0.071035, -0.149627);
    glVertex3f(0.141324, 0.092572, -0.10491);
    glVertex3f(0.153822, 0.076607, -0.105625);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.116756, 0.085324, -0.066272);
    glVertex3f(0.08605, 0.064535, -0.035151);
    glVertex3f(0.129851, 0.067247, -0.058314);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.046742, 0.076478, -0.065021);
    glVertex3f(0.018245, 0.059193, -0.100932);
    glVertex3f(0.043179, 0.058259, -0.056049);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.002661, 0.025979, -0.10045);
    glVertex3f(0.004112, 0.007554, -0.176849);
    glVertex3f(-0.029143, 0.007554, -0.098162);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.197984, 0.007554, -0.101985);
    glVertex3f(0.146073, 0.031957, -0.045713);
    glVertex3f(0.155397, 0.007554, -0.02809);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.076031, 0.007554, 0.011893);
    glVertex3f(0.029128, 0.029384, -0.04051);
    glVertex3f(0.005589, 0.007554, -0.022653);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.12213, 0.119756, -0.103363);
    glVertex3f(0.113626, 0.085855, -0.142373);
    glVertex3f(0.103516, 0.116606, -0.140044);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.071942, 0.168587, -0.144524);
    glVertex3f(0.060312, 0.221078, -0.123274);
    glVertex3f(0.083043, 0.226325, -0.132524);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.113423, 0.170327, -0.101738);
    glVertex3f(0.106854, 0.221806, -0.078597);
    glVertex3f(0.102513, 0.164603, -0.07288);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.099639, 0.167033, -0.131365);
    glVertex3f(0.083043, 0.226325, -0.132524);
    glVertex3f(0.106536, 0.22177, -0.123438);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.106536, 0.22177, -0.123438);
    glVertex3f(0.113423, 0.170327, -0.101738);
    glVertex3f(0.099639, 0.167033, -0.131365);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.076863, 0.163501, -0.057712);
    glVertex3f(0.061175, 0.2202, -0.077496);
    glVertex3f(0.046559, 0.15537, -0.069725);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.052513, 0.222234, -0.100264);
    glVertex3f(0.038612, 0.156118, -0.129829);
    glVertex3f(0.028519, 0.150466, -0.099694);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.039993, 0.086132, -0.13773);
    glVertex3f(0.072321, 0.119433, -0.154505);
    glVertex3f(0.077743, 0.088616, -0.157205);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.043832, 0.104825, -0.066046);
    glVertex3f(0.026118, 0.080584, -0.100344);
    glVertex3f(0.046742, 0.076478, -0.065021);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.106335, 0.116898, -0.069168);
    glVertex3f(0.080831, 0.082037, -0.048714);
    glVertex3f(0.116756, 0.085324, -0.066272);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.12213, 0.119756, -0.103363);
    glVertex3f(0.116756, 0.085324, -0.066272);
    glVertex3f(0.141324, 0.092572, -0.10491);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.05824, 0.260437, -0.073924);
    glVertex3f(0.063247, 0.29585, -0.052467);
    glVertex3f(0.043119, 0.283096, -0.061293);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.084091, 0.267276, -0.135655);
    glVertex3f(0.067778, 0.311363, -0.124292);
    glVertex3f(0.08573, 0.284327, -0.105497);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.084091, 0.267276, -0.135655);
    glVertex3f(0.103333, 0.307981, -0.128268);
    glVertex3f(0.098987, 0.296175, -0.151793);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.110901, 0.262798, -0.075464);
    glVertex3f(0.10436, 0.307695, -0.058794);
    glVertex3f(0.08511, 0.27131, -0.066977);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.083043, 0.226325, -0.132524);
    glVertex3f(0.111608, 0.255895, -0.127373);
    glVertex3f(0.106536, 0.22177, -0.123438);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.084666, 0.224094, -0.069335);
    glVertex3f(0.05824, 0.260437, -0.073924);
    glVertex3f(0.061175, 0.2202, -0.077496);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.115949, 0.226803, -0.101257);
    glVertex3f(0.110901, 0.262798, -0.075464);
    glVertex3f(0.106854, 0.221806, -0.078597);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.052513, 0.222234, -0.100264);
    glVertex3f(0.05824, 0.260437, -0.073924);
    glVertex3f(0.050953, 0.269556, -0.100738);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.121944, 0.293718, -0.065156);
    glVertex3f(0.150052, 0.320757, -0.073548);
    glVertex3f(0.143312, 0.315444, -0.055607);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.119527, 0.268822, -0.102167);
    glVertex3f(0.106825, 0.31521, -0.088301);
    glVertex3f(0.12865, 0.299346, -0.087547);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.110901, 0.262798, -0.075464);
    glVertex3f(0.12865, 0.299346, -0.087547);
    glVertex3f(0.121944, 0.293718, -0.065156);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.08511, 0.27131, -0.066977);
    glVertex3f(0.106825, 0.31521, -0.088301);
    glVertex3f(0.08573, 0.284327, -0.105497);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.070875, 0.297357, -0.146857);
    glVertex3f(0.03989, 0.341843, -0.153003);
    glVertex3f(0.067778, 0.311363, -0.124292);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.050953, 0.269556, -0.100738);
    glVertex3f(0.067778, 0.311363, -0.124292);
    glVertex3f(0.040135, 0.297544, -0.11669);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.058398, 0.260636, -0.126456);
    glVertex3f(0.040135, 0.297544, -0.11669);
    glVertex3f(0.048348, 0.286858, -0.138225);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.058398, 0.260636, -0.126456);
    glVertex3f(0.070875, 0.297357, -0.146857);
    glVertex3f(0.084091, 0.267276, -0.135655);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.098987, 0.296175, -0.151793);
    glVertex3f(0.143609, 0.339007, -0.178692);
    glVertex3f(0.124105, 0.284382, -0.143815);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.119527, 0.268822, -0.102167);
    glVertex3f(0.103333, 0.307981, -0.128268);
    glVertex3f(0.08573, 0.284327, -0.105497);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.111608, 0.255895, -0.127373);
    glVertex3f(0.132141, 0.297818, -0.122449);
    glVertex3f(0.119527, 0.268822, -0.102167);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.111608, 0.255895, -0.127373);
    glVertex3f(0.098987, 0.296175, -0.151793);
    glVertex3f(0.124105, 0.284382, -0.143815);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.063247, 0.29585, -0.052467);
    glVertex3f(0.017837, 0.339133, -0.047558);
    glVertex3f(0.020858, 0.322896, -0.028682);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.08511, 0.27131, -0.066977);
    glVertex3f(0.061993, 0.313585, -0.081029);
    glVertex3f(0.063247, 0.29585, -0.052467);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.050953, 0.269556, -0.100738);
    glVertex3f(0.061993, 0.313585, -0.081029);
    glVertex3f(0.08573, 0.284327, -0.105497);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.05824, 0.260437, -0.073924);
    glVertex3f(0.037323, 0.297213, -0.083082);
    glVertex3f(0.050953, 0.269556, -0.100738);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.002328, 0.322765, -0.050286);
    glVertex3f(-0.019757, 0.355351, -0.014818);
    glVertex3f(-0.022741, 0.363002, -0.025864);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.043119, 0.283096, -0.061293);
    glVertex3f(0.002328, 0.322765, -0.050286);
    glVertex3f(0.037323, 0.297213, -0.083082);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.037323, 0.297213, -0.083082);
    glVertex3f(0.017837, 0.339133, -0.047558);
    glVertex3f(0.061993, 0.313585, -0.081029);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.043119, 0.283096, -0.061293);
    glVertex3f(0.020858, 0.322896, -0.028682);
    glVertex3f(0.008549, 0.311194, -0.036296);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.011276, 0.373125, -0.023818);
    glVertex3f(-0.019757, 0.355351, -0.014818);
    glVertex3f(-0.009955, 0.362843, -0.010156);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.002328, 0.322765, -0.050286);
    glVertex3f(-0.011276, 0.373125, -0.023818);
    glVertex3f(0.017837, 0.339133, -0.047558);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.020858, 0.322896, -0.028682);
    glVertex3f(-0.019757, 0.355351, -0.014818);
    glVertex3f(0.008549, 0.311194, -0.036296);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.020858, 0.322896, -0.028682);
    glVertex3f(-0.011276, 0.373125, -0.023818);
    glVertex3f(-0.009955, 0.362843, -0.010156);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.135161, 0.339734, -0.073186);
    glVertex3f(0.154855, 0.367448, -0.043268);
    glVertex3f(0.157284, 0.373367, -0.061169);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.10436, 0.307695, -0.058794);
    glVertex3f(0.135161, 0.339734, -0.073186);
    glVertex3f(0.106825, 0.31521, -0.088301);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.12865, 0.299346, -0.087547);
    glVertex3f(0.135161, 0.339734, -0.073186);
    glVertex3f(0.150052, 0.320757, -0.073548);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.121944, 0.293718, -0.065156);
    glVertex3f(0.131773, 0.331413, -0.049347);
    glVertex3f(0.10436, 0.307695, -0.058794);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.157284, 0.373367, -0.061169);
    glVertex3f(0.165022, 0.35634, -0.04721);
    glVertex3f(0.169389, 0.360279, -0.061622);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.135161, 0.339734, -0.073186);
    glVertex3f(0.169389, 0.360279, -0.061622);
    glVertex3f(0.150052, 0.320757, -0.073548);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.131773, 0.331413, -0.049347);
    glVertex3f(0.165022, 0.35634, -0.04721);
    glVertex3f(0.154855, 0.367448, -0.043268);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.150052, 0.320757, -0.073548);
    glVertex3f(0.165022, 0.35634, -0.04721);
    glVertex3f(0.143312, 0.315444, -0.055607);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.124812, 0.347493, -0.184691);
    glVertex3f(0.154194, 0.400653, -0.192083);
    glVertex3f(0.143609, 0.339007, -0.178692);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.124105, 0.284382, -0.143815);
    glVertex3f(0.149558, 0.348423, -0.162561);
    glVertex3f(0.132141, 0.297818, -0.122449);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.098987, 0.296175, -0.151793);
    glVertex3f(0.127818, 0.355367, -0.166926);
    glVertex3f(0.124812, 0.347493, -0.184691);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.132141, 0.297818, -0.122449);
    glVertex3f(0.127818, 0.355367, -0.166926);
    glVertex3f(0.103333, 0.307981, -0.128268);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.154194, 0.400653, -0.192083);
    glVertex3f(0.141019, 0.405683, -0.182323);
    glVertex3f(0.157181, 0.403583, -0.179119);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.149558, 0.348423, -0.162561);
    glVertex3f(0.154194, 0.400653, -0.192083);
    glVertex3f(0.157181, 0.403583, -0.179119);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.124812, 0.347493, -0.184691);
    glVertex3f(0.141019, 0.405683, -0.182323);
    glVertex3f(0.139594, 0.403938, -0.196056);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.149558, 0.348423, -0.162561);
    glVertex3f(0.141019, 0.405683, -0.182323);
    glVertex3f(0.127818, 0.355367, -0.166926);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.03989, 0.341843, -0.153003);
    glVertex3f(0.001387, 0.360069, -0.16936);
    glVertex3f(0.020538, 0.322946, -0.145821);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.048348, 0.286858, -0.138225);
    glVertex3f(0.020538, 0.322946, -0.145821);
    glVertex3f(0.030558, 0.313761, -0.161784);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.040135, 0.297544, -0.11669);
    glVertex3f(0.03989, 0.341843, -0.153003);
    glVertex3f(0.020538, 0.322946, -0.145821);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.070875, 0.297357, -0.146857);
    glVertex3f(0.030558, 0.313761, -0.161784);
    glVertex3f(0.046166, 0.328344, -0.169686);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.007616, 0.354418, -0.181508);
    glVertex3f(0.01573, 0.372688, -0.17358);
    glVertex3f(0.019955, 0.364306, -0.18615);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.046166, 0.328344, -0.169686);
    glVertex3f(0.007616, 0.354418, -0.181508);
    glVertex3f(0.019955, 0.364306, -0.18615);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.03989, 0.341843, -0.153003);
    glVertex3f(0.019955, 0.364306, -0.18615);
    glVertex3f(0.01573, 0.372688, -0.17358);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.020538, 0.322946, -0.145821);
    glVertex3f(0.007616, 0.354418, -0.181508);
    glVertex3f(0.030558, 0.313761, -0.161784);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.076863, 0.163501, -0.057712);
    glVertex3f(0.106335, 0.116898, -0.069168);
    glVertex3f(0.102513, 0.164603, -0.07288);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.071942, 0.168587, -0.144524);
    glVertex3f(0.103516, 0.116606, -0.140044);
    glVertex3f(0.072321, 0.119433, -0.154505);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.099639, 0.167033, -0.131365);
    glVertex3f(0.12213, 0.119756, -0.103363);
    glVertex3f(0.103516, 0.116606, -0.140044);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.028519, 0.150466, -0.099694);
    glVertex3f(0.043832, 0.104825, -0.066046);
    glVertex3f(0.046559, 0.15537, -0.069725);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.038612, 0.156118, -0.129829);
    glVertex3f(0.072321, 0.119433, -0.154505);
    glVertex3f(0.034943, 0.116242, -0.134861);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.028519, 0.150466, -0.099694);
    glVertex3f(0.034943, 0.116242, -0.134861);
    glVertex3f(0.023213, 0.108548, -0.099877);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.046559, 0.15537, -0.069725);
    glVertex3f(0.075987, 0.111873, -0.050956);
    glVertex3f(0.076863, 0.163501, -0.057712);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.102513, 0.164603, -0.07288);
    glVertex3f(0.12213, 0.119756, -0.103363);
    glVertex3f(0.113423, 0.170327, -0.101738);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.077743, 0.088616, -0.157205);
    glVertex3f(0.103516, 0.116606, -0.140044);
    glVertex3f(0.113626, 0.085855, -0.142373);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.129851, 0.067247, -0.058314);
    glVertex3f(0.17425, 0.044238, -0.105382);
    glVertex3f(0.153822, 0.076607, -0.105625);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.08605, 0.064535, -0.035151);
    glVertex3f(0.029128, 0.029384, -0.04051);
    glVertex3f(0.085899, 0.033576, -0.012197);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.018245, 0.059193, -0.100932);
    glVertex3f(0.023686, 0.028977, -0.163717);
    glVertex3f(-0.002661, 0.025979, -0.10045);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.018245, 0.059193, -0.100932);
    glVertex3f(0.029128, 0.029384, -0.04051);
    glVertex3f(0.043179, 0.058259, -0.056049);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.153822, 0.076607, -0.105625);
    glVertex3f(0.143565, 0.035131, -0.163226);
    glVertex3f(0.126788, 0.071035, -0.149627);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.08605, 0.064535, -0.035151);
    glVertex3f(0.146073, 0.031957, -0.045713);
    glVertex3f(0.129851, 0.067247, -0.058314);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.085412, 0.039374, -0.194173);
    glVertex3f(0.126788, 0.071035, -0.149627);
    glVertex3f(0.143565, 0.035131, -0.163226);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.023686, 0.028977, -0.163717);
    glVertex3f(0.083077, 0.072757, -0.170905);
    glVertex3f(0.085412, 0.039374, -0.194173);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.005589, 0.007554, -0.022653);
    glVertex3f(-0.002661, 0.025979, -0.10045);
    glVertex3f(-0.029143, 0.007554, -0.098162);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.115949, 0.226803, -0.101257);
    glVertex3f(0.106536, 0.22177, -0.123438);
    glVertex3f(0.111608, 0.255895, -0.127373);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.034943, 0.116242, -0.134861);
    glVertex3f(0.039993, 0.086132, -0.13773);
    glVertex3f(0.026118, 0.080584, -0.100344);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.077743, 0.088616, -0.157205);
    glVertex3f(0.083077, 0.072757, -0.170905);
    glVertex3f(0.036949, 0.063643, -0.148669);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.154682, 0.007554, -0.176255);
    glVertex3f(0.079953, 0.007554, -0.215223);
    glVertex3f(0.085412, 0.039374, -0.194173);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.079953, 0.007554, -0.215223);
    glVertex3f(0.004112, 0.007554, -0.176849);
    glVertex3f(0.023686, 0.028977, -0.163717);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.083043, 0.226325, -0.132524);
    glVertex3f(0.060312, 0.221078, -0.123274);
    glVertex3f(0.058398, 0.260636, -0.126456);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.052513, 0.222234, -0.100264);
    glVertex3f(0.050953, 0.269556, -0.100738);
    glVertex3f(0.058398, 0.260636, -0.126456);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.113626, 0.085855, -0.142373);
    glVertex3f(0.126788, 0.071035, -0.149627);
    glVertex3f(0.083077, 0.072757, -0.170905);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.155397, 0.007554, -0.02809);
    glVertex3f(0.146073, 0.031957, -0.045713);
    glVertex3f(0.085899, 0.033576, -0.012197);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.084666, 0.224094, -0.069335);
    glVertex3f(0.106854, 0.221806, -0.078597);
    glVertex3f(0.110901, 0.262798, -0.075464);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.102513, 0.164603, -0.07288);
    glVertex3f(0.106854, 0.221806, -0.078597);
    glVertex3f(0.084666, 0.224094, -0.069335);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.141324, 0.092572, -0.10491);
    glVertex3f(0.116756, 0.085324, -0.066272);
    glVertex3f(0.129851, 0.067247, -0.058314);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.075987, 0.111873, -0.050956);
    glVertex3f(0.043832, 0.104825, -0.066046);
    glVertex3f(0.046742, 0.076478, -0.065021);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.046559, 0.15537, -0.069725);
    glVertex3f(0.061175, 0.2202, -0.077496);
    glVertex3f(0.052513, 0.222234, -0.100264);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.154682, 0.007554, -0.176255);
    glVertex3f(0.143565, 0.035131, -0.163226);
    glVertex3f(0.17425, 0.044238, -0.105382);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.018245, 0.059193, -0.100932);
    glVertex3f(0.026118, 0.080584, -0.100344);
    glVertex3f(0.039993, 0.086132, -0.13773);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.080831, 0.082037, -0.048714);
    glVertex3f(0.046742, 0.076478, -0.065021);
    glVertex3f(0.043179, 0.058259, -0.056049);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.126788, 0.071035, -0.149627);
    glVertex3f(0.113626, 0.085855, -0.142373);
    glVertex3f(0.141324, 0.092572, -0.10491);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.116756, 0.085324, -0.066272);
    glVertex3f(0.080831, 0.082037, -0.048714);
    glVertex3f(0.08605, 0.064535, -0.035151);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.046742, 0.076478, -0.065021);
    glVertex3f(0.026118, 0.080584, -0.100344);
    glVertex3f(0.018245, 0.059193, -0.100932);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.002661, 0.025979, -0.10045);
    glVertex3f(0.023686, 0.028977, -0.163717);
    glVertex3f(0.004112, 0.007554, -0.176849);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.197984, 0.007554, -0.101985);
    glVertex3f(0.17425, 0.044238, -0.105382);
    glVertex3f(0.146073, 0.031957, -0.045713);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.076031, 0.007554, 0.011893);
    glVertex3f(0.085899, 0.033576, -0.012197);
    glVertex3f(0.029128, 0.029384, -0.04051);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.12213, 0.119756, -0.103363);
    glVertex3f(0.141324, 0.092572, -0.10491);
    glVertex3f(0.113626, 0.085855, -0.142373);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.071942, 0.168587, -0.144524);
    glVertex3f(0.038612, 0.156118, -0.129829);
    glVertex3f(0.060312, 0.221078, -0.123274);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.113423, 0.170327, -0.101738);
    glVertex3f(0.115949, 0.226803, -0.101257);
    glVertex3f(0.106854, 0.221806, -0.078597);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.099639, 0.167033, -0.131365);
    glVertex3f(0.071942, 0.168587, -0.144524);
    glVertex3f(0.083043, 0.226325, -0.132524);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.106536, 0.22177, -0.123438);
    glVertex3f(0.115949, 0.226803, -0.101257);
    glVertex3f(0.113423, 0.170327, -0.101738);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.076863, 0.163501, -0.057712);
    glVertex3f(0.084666, 0.224094, -0.069335);
    glVertex3f(0.061175, 0.2202, -0.077496);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.052513, 0.222234, -0.100264);
    glVertex3f(0.060312, 0.221078, -0.123274);
    glVertex3f(0.038612, 0.156118, -0.129829);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.039993, 0.086132, -0.13773);
    glVertex3f(0.034943, 0.116242, -0.134861);
    glVertex3f(0.072321, 0.119433, -0.154505);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.043832, 0.104825, -0.066046);
    glVertex3f(0.023213, 0.108548, -0.099877);
    glVertex3f(0.026118, 0.080584, -0.100344);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.106335, 0.116898, -0.069168);
    glVertex3f(0.075987, 0.111873, -0.050956);
    glVertex3f(0.080831, 0.082037, -0.048714);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.12213, 0.119756, -0.103363);
    glVertex3f(0.106335, 0.116898, -0.069168);
    glVertex3f(0.116756, 0.085324, -0.066272);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.05824, 0.260437, -0.073924);
    glVertex3f(0.08511, 0.27131, -0.066977);
    glVertex3f(0.063247, 0.29585, -0.052467);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.084091, 0.267276, -0.135655);
    glVertex3f(0.070875, 0.297357, -0.146857);
    glVertex3f(0.067778, 0.311363, -0.124292);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.084091, 0.267276, -0.135655);
    glVertex3f(0.08573, 0.284327, -0.105497);
    glVertex3f(0.103333, 0.307981, -0.128268);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.110901, 0.262798, -0.075464);
    glVertex3f(0.121944, 0.293718, -0.065156);
    glVertex3f(0.10436, 0.307695, -0.058794);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.083043, 0.226325, -0.132524);
    glVertex3f(0.084091, 0.267276, -0.135655);
    glVertex3f(0.111608, 0.255895, -0.127373);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.084666, 0.224094, -0.069335);
    glVertex3f(0.08511, 0.27131, -0.066977);
    glVertex3f(0.05824, 0.260437, -0.073924);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.115949, 0.226803, -0.101257);
    glVertex3f(0.119527, 0.268822, -0.102167);
    glVertex3f(0.110901, 0.262798, -0.075464);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.052513, 0.222234, -0.100264);
    glVertex3f(0.061175, 0.2202, -0.077496);
    glVertex3f(0.05824, 0.260437, -0.073924);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.121944, 0.293718, -0.065156);
    glVertex3f(0.12865, 0.299346, -0.087547);
    glVertex3f(0.150052, 0.320757, -0.073548);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.119527, 0.268822, -0.102167);
    glVertex3f(0.08573, 0.284327, -0.105497);
    glVertex3f(0.106825, 0.31521, -0.088301);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.110901, 0.262798, -0.075464);
    glVertex3f(0.119527, 0.268822, -0.102167);
    glVertex3f(0.12865, 0.299346, -0.087547);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.08511, 0.27131, -0.066977);
    glVertex3f(0.10436, 0.307695, -0.058794);
    glVertex3f(0.106825, 0.31521, -0.088301);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.070875, 0.297357, -0.146857);
    glVertex3f(0.046166, 0.328344, -0.169686);
    glVertex3f(0.03989, 0.341843, -0.153003);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.050953, 0.269556, -0.100738);
    glVertex3f(0.08573, 0.284327, -0.105497);
    glVertex3f(0.067778, 0.311363, -0.124292);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.058398, 0.260636, -0.126456);
    glVertex3f(0.050953, 0.269556, -0.100738);
    glVertex3f(0.040135, 0.297544, -0.11669);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.058398, 0.260636, -0.126456);
    glVertex3f(0.048348, 0.286858, -0.138225);
    glVertex3f(0.070875, 0.297357, -0.146857);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.098987, 0.296175, -0.151793);
    glVertex3f(0.124812, 0.347493, -0.184691);
    glVertex3f(0.143609, 0.339007, -0.178692);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.119527, 0.268822, -0.102167);
    glVertex3f(0.132141, 0.297818, -0.122449);
    glVertex3f(0.103333, 0.307981, -0.128268);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.111608, 0.255895, -0.127373);
    glVertex3f(0.124105, 0.284382, -0.143815);
    glVertex3f(0.132141, 0.297818, -0.122449);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.111608, 0.255895, -0.127373);
    glVertex3f(0.084091, 0.267276, -0.135655);
    glVertex3f(0.098987, 0.296175, -0.151793);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.063247, 0.29585, -0.052467);
    glVertex3f(0.061993, 0.313585, -0.081029);
    glVertex3f(0.017837, 0.339133, -0.047558);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.08511, 0.27131, -0.066977);
    glVertex3f(0.08573, 0.284327, -0.105497);
    glVertex3f(0.061993, 0.313585, -0.081029);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.050953, 0.269556, -0.100738);
    glVertex3f(0.037323, 0.297213, -0.083082);
    glVertex3f(0.061993, 0.313585, -0.081029);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.05824, 0.260437, -0.073924);
    glVertex3f(0.043119, 0.283096, -0.061293);
    glVertex3f(0.037323, 0.297213, -0.083082);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.002328, 0.322765, -0.050286);
    glVertex3f(0.008549, 0.311194, -0.036296);
    glVertex3f(-0.019757, 0.355351, -0.014818);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.043119, 0.283096, -0.061293);
    glVertex3f(0.008549, 0.311194, -0.036296);
    glVertex3f(0.002328, 0.322765, -0.050286);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.037323, 0.297213, -0.083082);
    glVertex3f(0.002328, 0.322765, -0.050286);
    glVertex3f(0.017837, 0.339133, -0.047558);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.043119, 0.283096, -0.061293);
    glVertex3f(0.063247, 0.29585, -0.052467);
    glVertex3f(0.020858, 0.322896, -0.028682);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(-0.011276, 0.373125, -0.023818);
    glVertex3f(-0.022741, 0.363002, -0.025864);
    glVertex3f(-0.019757, 0.355351, -0.014818);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.002328, 0.322765, -0.050286);
    glVertex3f(-0.022741, 0.363002, -0.025864);
    glVertex3f(-0.011276, 0.373125, -0.023818);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.020858, 0.322896, -0.028682);
    glVertex3f(-0.009955, 0.362843, -0.010156);
    glVertex3f(-0.019757, 0.355351, -0.014818);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.020858, 0.322896, -0.028682);
    glVertex3f(0.017837, 0.339133, -0.047558);
    glVertex3f(-0.011276, 0.373125, -0.023818);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.135161, 0.339734, -0.073186);
    glVertex3f(0.131773, 0.331413, -0.049347);
    glVertex3f(0.154855, 0.367448, -0.043268);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.10436, 0.307695, -0.058794);
    glVertex3f(0.131773, 0.331413, -0.049347);
    glVertex3f(0.135161, 0.339734, -0.073186);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.12865, 0.299346, -0.087547);
    glVertex3f(0.106825, 0.31521, -0.088301);
    glVertex3f(0.135161, 0.339734, -0.073186);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.121944, 0.293718, -0.065156);
    glVertex3f(0.143312, 0.315444, -0.055607);
    glVertex3f(0.131773, 0.331413, -0.049347);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.157284, 0.373367, -0.061169);
    glVertex3f(0.154855, 0.367448, -0.043268);
    glVertex3f(0.165022, 0.35634, -0.04721);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.135161, 0.339734, -0.073186);
    glVertex3f(0.157284, 0.373367, -0.061169);
    glVertex3f(0.169389, 0.360279, -0.061622);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.131773, 0.331413, -0.049347);
    glVertex3f(0.143312, 0.315444, -0.055607);
    glVertex3f(0.165022, 0.35634, -0.04721);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.150052, 0.320757, -0.073548);
    glVertex3f(0.169389, 0.360279, -0.061622);
    glVertex3f(0.165022, 0.35634, -0.04721);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.124812, 0.347493, -0.184691);
    glVertex3f(0.139594, 0.403938, -0.196056);
    glVertex3f(0.154194, 0.400653, -0.192083);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.124105, 0.284382, -0.143815);
    glVertex3f(0.143609, 0.339007, -0.178692);
    glVertex3f(0.149558, 0.348423, -0.162561);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.098987, 0.296175, -0.151793);
    glVertex3f(0.103333, 0.307981, -0.128268);
    glVertex3f(0.127818, 0.355367, -0.166926);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.132141, 0.297818, -0.122449);
    glVertex3f(0.149558, 0.348423, -0.162561);
    glVertex3f(0.127818, 0.355367, -0.166926);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.154194, 0.400653, -0.192083);
    glVertex3f(0.139594, 0.403938, -0.196056);
    glVertex3f(0.141019, 0.405683, -0.182323);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.149558, 0.348423, -0.162561);
    glVertex3f(0.143609, 0.339007, -0.178692);
    glVertex3f(0.154194, 0.400653, -0.192083);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.124812, 0.347493, -0.184691);
    glVertex3f(0.127818, 0.355367, -0.166926);
    glVertex3f(0.141019, 0.405683, -0.182323);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.149558, 0.348423, -0.162561);
    glVertex3f(0.157181, 0.403583, -0.179119);
    glVertex3f(0.141019, 0.405683, -0.182323);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.03989, 0.341843, -0.153003);
    glVertex3f(0.01573, 0.372688, -0.17358);
    glVertex3f(0.001387, 0.360069, -0.16936);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.048348, 0.286858, -0.138225);
    glVertex3f(0.040135, 0.297544, -0.11669);
    glVertex3f(0.020538, 0.322946, -0.145821);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.040135, 0.297544, -0.11669);
    glVertex3f(0.067778, 0.311363, -0.124292);
    glVertex3f(0.03989, 0.341843, -0.153003);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.070875, 0.297357, -0.146857);
    glVertex3f(0.048348, 0.286858, -0.138225);
    glVertex3f(0.030558, 0.313761, -0.161784);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.007616, 0.354418, -0.181508);
    glVertex3f(0.001387, 0.360069, -0.16936);
    glVertex3f(0.01573, 0.372688, -0.17358);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.046166, 0.328344, -0.169686);
    glVertex3f(0.030558, 0.313761, -0.161784);
    glVertex3f(0.007616, 0.354418, -0.181508);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.03989, 0.341843, -0.153003);
    glVertex3f(0.046166, 0.328344, -0.169686);
    glVertex3f(0.019955, 0.364306, -0.18615);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.020538, 0.322946, -0.145821);
    glVertex3f(0.001387, 0.360069, -0.16936);
    glVertex3f(0.007616, 0.354418, -0.181508);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.076863, 0.163501, -0.057712);
    glVertex3f(0.075987, 0.111873, -0.050956);
    glVertex3f(0.106335, 0.116898, -0.069168);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.071942, 0.168587, -0.144524);
    glVertex3f(0.099639, 0.167033, -0.131365);
    glVertex3f(0.103516, 0.116606, -0.140044);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.099639, 0.167033, -0.131365);
    glVertex3f(0.113423, 0.170327, -0.101738);
    glVertex3f(0.12213, 0.119756, -0.103363);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.028519, 0.150466, -0.099694);
    glVertex3f(0.023213, 0.108548, -0.099877);
    glVertex3f(0.043832, 0.104825, -0.066046);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.038612, 0.156118, -0.129829);
    glVertex3f(0.071942, 0.168587, -0.144524);
    glVertex3f(0.072321, 0.119433, -0.154505);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.028519, 0.150466, -0.099694);
    glVertex3f(0.038612, 0.156118, -0.129829);
    glVertex3f(0.034943, 0.116242, -0.134861);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.046559, 0.15537, -0.069725);
    glVertex3f(0.043832, 0.104825, -0.066046);
    glVertex3f(0.075987, 0.111873, -0.050956);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.102513, 0.164603, -0.07288);
    glVertex3f(0.106335, 0.116898, -0.069168);
    glVertex3f(0.12213, 0.119756, -0.103363);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.077743, 0.088616, -0.157205);
    glVertex3f(0.072321, 0.119433, -0.154505);
    glVertex3f(0.103516, 0.116606, -0.140044);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.129851, 0.067247, -0.058314);
    glVertex3f(0.146073, 0.031957, -0.045713);
    glVertex3f(0.17425, 0.044238, -0.105382);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.08605, 0.064535, -0.035151);
    glVertex3f(0.043179, 0.058259, -0.056049);
    glVertex3f(0.029128, 0.029384, -0.04051);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.018245, 0.059193, -0.100932);
    glVertex3f(0.036949, 0.063643, -0.148669);
    glVertex3f(0.023686, 0.028977, -0.163717);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.018245, 0.059193, -0.100932);
    glVertex3f(-0.002661, 0.025979, -0.10045);
    glVertex3f(0.029128, 0.029384, -0.04051);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.153822, 0.076607, -0.105625);
    glVertex3f(0.17425, 0.044238, -0.105382);
    glVertex3f(0.143565, 0.035131, -0.163226);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.08605, 0.064535, -0.035151);
    glVertex3f(0.085899, 0.033576, -0.012197);
    glVertex3f(0.146073, 0.031957, -0.045713);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.085412, 0.039374, -0.194173);
    glVertex3f(0.083077, 0.072757, -0.170905);
    glVertex3f(0.126788, 0.071035, -0.149627);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.023686, 0.028977, -0.163717);
    glVertex3f(0.036949, 0.063643, -0.148669);
    glVertex3f(0.083077, 0.072757, -0.170905);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex3f(0.005589, 0.007554, -0.022653);
    glVertex3f(0.029128, 0.029384, -0.04051);
    glVertex3f(-0.002661, 0.025979, -0.10045);
  glEnd();

  glPopMatrix();
}
