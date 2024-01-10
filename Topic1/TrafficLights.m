
hold on;
axis([0 50 0 50]);
title('Traffic Light');

%Draw the stick
rectangle('Position',[24 5 2 10],'FaceColor','#808080');

%Draw the black rectangle
rectangle('Position',[20 15 10 30],'FaceColor','black','Curvature',0.5);

%Circle's off state and on state colours
off_state_red=[0.6350 0.0780 0.1840];
off_state_yellow=[0.8, 0.6940, 0.1250];
off_state_green=[0.5 0.5 0];
on_state_red='r';
on_state_yellow='y';
on_state_green='g';

%Draw the off state circles
r=4;
a=0:0.1:2*pi;
fill(25+r*cos(a),40+r*sin(a),off_state_red);
fill(25+r*cos(a),30+r*sin(a),off_state_yellow);
fill(25+r*cos(a),20+r*sin(a),off_state_green);

%Draw the 2 yellow stripes
x=[24 24 26 26 24];
y1=[11 12 14 13 11];
y2=[6 7 9 8 6];
fill(x,y1,'yellow');
fill(x,y2,'yellow');
axis([0 50 0 50]);

while true
    
    %Blink red circle
    fill(25+r*cos(a),40+r*sin(a),on_state_red);
    pause(2);
    fill(25+r*cos(a),40+r*sin(a),off_state_red);
 
    %Blink yellow circle
    fill(25+r*cos(a),30+r*sin(a),on_state_yellow);
    pause(2);
    fill(25+r*cos(a),30+r*sin(a),off_state_yellow);
   
    %Blink green circle
    fill(25+r*cos(a),20+r*sin(a),on_state_green);
    pause(2);
    fill(25+r*cos(a),20+r*sin(a),off_state_green);

end
