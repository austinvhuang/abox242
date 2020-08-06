;//
;// fftop.inc       generated by GBUILD.cpp
;//

;;;//   LAYOUT MAIN 0 0
;;;//   LAYOUT WORK 0 256
;;;//   LAYOUT PREV 631 9

;;;// SWITCH IS_POLYGON
;;;// SWITCH BUILD_OUT1
;;;// SWITCH BUILD_OUT2
;;;// SWITCH BUILD_OUT3
;;;// PARAM S 10
;;;// PARAM Q 3
;;;// PARAM A 19
;;;// PARAM B 12
;;;// PARAM RAD1 1
;;;// PARAM RAD2 3
;;;// PARAM RAD3 5
;;;// PARAM SCALE_TOP 2
;;;// PARAM SCALE_BOT 20
;;;// PARAM CONTAINER fftop_container
;;;// POINT  132 112
;;;// POINT  511 112
;;;// POINT  511 359
;;;// POINT  132 359
;;;// CENTER_POINT  319 240
;;;// BITMAP C:\WINDOWS\Desktop\ABox200\VR\prism\F_ADSR.BMP ADSR_SMALL_PSOURCE  312 218 2
;;;// BITMAP C:\WINDOWS\Desktop\ABox200\VR\prism\F_ADSR2.BMP ADSR2SMALL_PSOURCE  472 390 2
;;;// BITMAP C:\WINDOWS\Desktop\ABox200\VR\prism\F_CONJ.BMP FFTOP_CONJ_PSOURCE  312 244 4
;;;// BITMAP C:\WINDOWS\Desktop\ABox200\VR\prism\F_CULL.BMP FFTOP_CULL_PSOURCE  350 218 4
;;;// BITMAP C:\WINDOWS\Desktop\ABox200\VR\prism\F_DIV.BMP FFTOP_DIV_PSOURCE  350 244 4
;;;// BITMAP C:\WINDOWS\Desktop\ABox200\VR\prism\F_INJ.BMP FFTOP_INJECT_PSOURCE  434 344 4
;;;// BITMAP C:\WINDOWS\Desktop\ABox200\VR\prism\F_KNOB.BMP KNOB_SMALL_PSOURCE  426 218 1
;;;// BITMAP C:\WINDOWS\Desktop\ABox200\VR\prism\F_MUL.BMP FFTOP_MUL_PSOURCE  472 286 4
;;;// BITMAP C:\WINDOWS\Desktop\ABox200\VR\prism\F_POW.BMP FFTOP_MAG2_PSOURCE  472 312 4
;;;// BITMAP C:\WINDOWS\Desktop\ABox200\VR\prism\F_REP.BMP FFTOP_REPLACE_PSOURCE  472 260 4
;;;// BITMAP C:\WINDOWS\Desktop\ABox200\VR\prism\F_SCALE.BMP FFTOP_SCALE_PSOURCE  388 244 4
;;;// BITMAP C:\WINDOWS\Desktop\ABox200\VR\prism\F_SHIFT.BMP FFTOP_SHIFT_PSOURCE  426 244 4
;;;// BITMAP C:\WINDOWS\Desktop\ABox200\VR\prism\F_SORT.BMP FFTOP_SORT_PSOURCE  472 338 4
;;;// BITMAP C:\WINDOWS\Desktop\ABox200\VR\prism\F_XIMAG.BMP FFTOP_IMAG_PSOURCE  472 364 4
;;;// BITMAP C:\WINDOWS\Desktop\ABox200\VR\prism\F_XMAG.BMP FFTOP_POWER_PSOURCE  388 218 4
;;;// BITMAP C:\WINDOWS\Desktop\ABox200\VR\prism\F_XREAL.BMP FFTOP_REAL_PSOURCE  432 370 4
;//

    BMP_COMPOSITE_TAG
    BCOM_PALETTE_GROUP 2
    BCOM_SOURCE_FILE C:\WINDOWS\Desktop\ABox200\VR\prism\F_ADSR_th.bmp
    BCOM_SOURCE_RECT  13, 11, 51, 36
    BCOM_DEST_TL  ADSR_SMALL_PSOURCE, 312, 218

    BMP_COMPOSITE_TAG
    BCOM_PALETTE_GROUP 2
    BCOM_SOURCE_FILE C:\WINDOWS\Desktop\ABox200\VR\prism\F_ADSR2th.bmp
    BCOM_SOURCE_RECT  13, 11, 51, 36
    BCOM_DEST_TL  ADSR2SMALL_PSOURCE, 472, 390

    BMP_COMPOSITE_TAG
    BCOM_PALETTE_GROUP 4
    BCOM_SOURCE_FILE C:\WINDOWS\Desktop\ABox200\VR\prism\F_CONJ_th.bmp
    BCOM_SOURCE_RECT  13, 11, 51, 36
    BCOM_DEST_TL  FFTOP_CONJ_PSOURCE, 312, 244

    BMP_COMPOSITE_TAG
    BCOM_PALETTE_GROUP 4
    BCOM_SOURCE_FILE C:\WINDOWS\Desktop\ABox200\VR\prism\F_CULL_th.bmp
    BCOM_SOURCE_RECT  13, 11, 51, 36
    BCOM_DEST_TL  FFTOP_CULL_PSOURCE, 350, 218

    BMP_COMPOSITE_TAG
    BCOM_PALETTE_GROUP 4
    BCOM_SOURCE_FILE C:\WINDOWS\Desktop\ABox200\VR\prism\F_DIV_th.bmp
    BCOM_SOURCE_RECT  13, 11, 51, 36
    BCOM_DEST_TL  FFTOP_DIV_PSOURCE, 350, 244

    BMP_COMPOSITE_TAG
    BCOM_PALETTE_GROUP 4
    BCOM_SOURCE_FILE C:\WINDOWS\Desktop\ABox200\VR\prism\F_INJ_th.bmp
    BCOM_SOURCE_RECT  13, 11, 51, 36
    BCOM_DEST_TL  FFTOP_INJECT_PSOURCE, 434, 344

    BMP_COMPOSITE_TAG
    BCOM_PALETTE_GROUP 1
    BCOM_SOURCE_FILE C:\WINDOWS\Desktop\ABox200\VR\prism\F_KNOB_th.bmp
    BCOM_SOURCE_RECT  13, 11, 51, 36
    BCOM_DEST_TL  KNOB_SMALL_PSOURCE, 426, 218

    BMP_COMPOSITE_TAG
    BCOM_PALETTE_GROUP 4
    BCOM_SOURCE_FILE C:\WINDOWS\Desktop\ABox200\VR\prism\F_MUL_th.bmp
    BCOM_SOURCE_RECT  13, 11, 51, 36
    BCOM_DEST_TL  FFTOP_MUL_PSOURCE, 472, 286

    BMP_COMPOSITE_TAG
    BCOM_PALETTE_GROUP 4
    BCOM_SOURCE_FILE C:\WINDOWS\Desktop\ABox200\VR\prism\F_POW_th.bmp
    BCOM_SOURCE_RECT  13, 11, 51, 36
    BCOM_DEST_TL  FFTOP_MAG2_PSOURCE, 472, 312

    BMP_COMPOSITE_TAG
    BCOM_PALETTE_GROUP 4
    BCOM_SOURCE_FILE C:\WINDOWS\Desktop\ABox200\VR\prism\F_REP_th.bmp
    BCOM_SOURCE_RECT  13, 11, 51, 36
    BCOM_DEST_TL  FFTOP_REPLACE_PSOURCE, 472, 260

    BMP_COMPOSITE_TAG
    BCOM_PALETTE_GROUP 4
    BCOM_SOURCE_FILE C:\WINDOWS\Desktop\ABox200\VR\prism\F_SCALE_th.bmp
    BCOM_SOURCE_RECT  13, 11, 51, 36
    BCOM_DEST_TL  FFTOP_SCALE_PSOURCE, 388, 244

    BMP_COMPOSITE_TAG
    BCOM_PALETTE_GROUP 4
    BCOM_SOURCE_FILE C:\WINDOWS\Desktop\ABox200\VR\prism\F_SHIFT_th.bmp
    BCOM_SOURCE_RECT  13, 11, 51, 36
    BCOM_DEST_TL  FFTOP_SHIFT_PSOURCE, 426, 244

    BMP_COMPOSITE_TAG
    BCOM_PALETTE_GROUP 4
    BCOM_SOURCE_FILE C:\WINDOWS\Desktop\ABox200\VR\prism\F_SORT_th.bmp
    BCOM_SOURCE_RECT  13, 11, 51, 36
    BCOM_DEST_TL  FFTOP_SORT_PSOURCE, 472, 338

    BMP_COMPOSITE_TAG
    BCOM_PALETTE_GROUP 4
    BCOM_SOURCE_FILE C:\WINDOWS\Desktop\ABox200\VR\prism\F_XIMAG_th.bmp
    BCOM_SOURCE_RECT  13, 11, 51, 36
    BCOM_DEST_TL  FFTOP_IMAG_PSOURCE, 472, 364

    BMP_COMPOSITE_TAG
    BCOM_PALETTE_GROUP 4
    BCOM_SOURCE_FILE C:\WINDOWS\Desktop\ABox200\VR\prism\F_XMAG_th.bmp
    BCOM_SOURCE_RECT  13, 11, 51, 36
    BCOM_DEST_TL  FFTOP_POWER_PSOURCE, 388, 218

    BMP_COMPOSITE_TAG
    BCOM_PALETTE_GROUP 4
    BCOM_SOURCE_FILE C:\WINDOWS\Desktop\ABox200\VR\prism\F_XREAL_th.bmp
    BCOM_SOURCE_RECT  13, 11, 51, 36
    BCOM_DEST_TL  FFTOP_REAL_PSOURCE, 432, 370

EXTERNDEF fftop_container_points:fPOINT
EXTERNDEF fftop_container:GDI_CONTAINER

