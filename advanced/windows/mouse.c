#include <ApplicationServices/ApplicationServices.h>

int main() {
    // Definir as coordenadas para onde você deseja mover o cursor
    int x = 500;
    int y = 500;

    // Criar um evento de mouse
    CGEventRef moveEvent = CGEventCreateMouseEvent(
        NULL,
        kCGEventMouseMoved,
        CGPointMake(x, y),
        kCGMouseButtonLeft // Você pode alterar isso para o botão do mouse desejado
    );

    // Enviar o evento
    CGEventPost(kCGHIDEventTap, moveEvent);

    // Liberar o evento
    CFRelease(moveEvent);

    return 0;
}
