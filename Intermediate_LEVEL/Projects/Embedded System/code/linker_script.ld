/*****************************
* Name: Abdullah ghazal      *
* File: linker_script.ld     *
* board: BlueBell            *
******************************/

ENTRY(Reset_Handler) 

MEMORY {
    FLASH(rx) : ORIGIN = 0x08000000, LENGTH = 64K
    SRAM(rwx) : ORIGIN = 0x20000000, LENGTH = 20K
}

SECTIONS {
    .text : {
        *(.isr_vector)
        *(.rodata)
        *(.text)
        _etext = .;
        . = ALIGN(4);
    } > FLASH

    .data : {
        _sdata = .;
        *(.data)
        _edata = .;
        . = ALIGN(4);
    } > SRAM AT > FLASH

    .bss : {
        _sbss = .;
        *(.bss)
        _ebss = .;
        . = ALIGN(4);
    } > SRAM
}