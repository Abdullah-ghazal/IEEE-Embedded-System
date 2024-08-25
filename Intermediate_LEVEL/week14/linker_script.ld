ENTRY(Reset_Handler)

MEMORY
{
    FLASH(RX) : ORIGIN = 0X08000000, LENGTH = 512K
    SRAM(RWX) : ORIGIN = 0X20000000, LENGTH = 128K
}

SECTIONS
{
    .text: 
    {
        *(.vectors)
        *(.text)
        *(.rodata)
        . = ALIGN(4);
        _E_TEXT = .;
    } > FLASH

    .data: 
    {
        _S_DATA = .;
        *(.data)
        . = ALIGN(4);
        _E_DATA = .;
    } > SRAM AT > FLASH

    .bss :
    {
        _S_BSS = . ;
        *(.bss)
        . = ALIGN(4);
        _E_BSS = . ;
    } > SRAM
}
