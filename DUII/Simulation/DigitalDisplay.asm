﻿; Listing generated by Microsoft (R) Optimizing Compiler Version 16.00.40219.01 

	TITLE	C:\DUII\DUII\DigitalDisplay.cpp
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB LIBCMT
INCLUDELIB OLDNAMES

CONST	SEGMENT
$SG15443 DB	'%.0f', 00H
$SG15457 DB	00H
	ORG $+2
$SG15444 DB	'%%%d.%df', 00H
CONST	ENDS
PUBLIC	?GetMaxTextLength@DigitalDisplay@@AAEHXZ	; DigitalDisplay::GetMaxTextLength
PUBLIC	__real@00000000
PUBLIC	??0DigitalDisplay@@QAE@HHHHPAD0MMHHW4DigitalOptions@@PAVAlarm@@_NUGUI_FONT@@4J@Z ; DigitalDisplay::DigitalDisplay
EXTRN	_GUI_MEMDEV_Create:PROC
EXTRN	??0ControlBase@@QAE@HHPAD0PAVAlarm@@@Z:PROC	; ControlBase::ControlBase
EXTRN	__fltused:DWORD
EXTRN	__RTC_CheckEsp:PROC
EXTRN	__RTC_Shutdown:PROC
EXTRN	__RTC_InitBase:PROC
;	COMDAT __real@00000000
; File c:\duii\duii\digitaldisplay.cpp
CONST	SEGMENT
__real@00000000 DD 000000000r			; 0
CONST	ENDS
;	COMDAT rtc$TMZ
rtc$TMZ	SEGMENT
__RTC_Shutdown.rtc$TMZ DD FLAT:__RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
__RTC_InitBase.rtc$IMZ DD FLAT:__RTC_InitBase
; Function compile flags: /Odtp /RTCsu /ZI
rtc$IMZ	ENDS
;	COMDAT ??0DigitalDisplay@@QAE@HHHHPAD0MMHHW4DigitalOptions@@PAVAlarm@@_NUGUI_FONT@@4J@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_xLoc$ = 8						; size = 4
_yLoc$ = 12						; size = 4
_xSize$ = 16						; size = 4
_ySize$ = 20						; size = 4
_Name$ = 24						; size = 4
_Units$ = 28						; size = 4
_dMin$ = 32						; size = 4
_dMax$ = 36						; size = 4
_iPrecision$ = 40					; size = 4
_iDividerLock$ = 44					; size = 4
_Options$ = 48						; size = 4
_AlarmList$ = 52					; size = 4
_bShowLabel$ = 56					; size = 1
_fNumberFont$ = 60					; size = 36
_fLabelFont$ = 96					; size = 36
__hParent$ = 132					; size = 4
??0DigitalDisplay@@QAE@HHHHPAD0MMHHW4DigitalOptions@@PAVAlarm@@_NUGUI_FONT@@4J@Z PROC ; DigitalDisplay::DigitalDisplay, COMDAT
; _this$ = ecx
; Line 13
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
	mov	eax, DWORD PTR _AlarmList$[ebp]
	push	eax
	mov	ecx, DWORD PTR _Units$[ebp]
	push	ecx
	mov	edx, DWORD PTR _Name$[ebp]
	push	edx
	mov	eax, DWORD PTR _yLoc$[ebp]
	push	eax
	mov	ecx, DWORD PTR _xLoc$[ebp]
	push	ecx
	mov	ecx, DWORD PTR _this$[ebp]
	call	??0ControlBase@@QAE@HHPAD0PAVAlarm@@@Z	; ControlBase::ControlBase
; Line 14
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _xSize$[ebp]
	mov	DWORD PTR [eax+80], ecx
; Line 15
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _ySize$[ebp]
	mov	DWORD PTR [eax+84], ecx
; Line 17
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _iPrecision$[ebp]
	mov	DWORD PTR [eax+88], ecx
; Line 18
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR _dMin$[ebp]
	fstp	DWORD PTR [eax+72]
; Line 19
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR _dMax$[ebp]
	fstp	DWORD PTR [eax+76]
; Line 20
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _iDividerLock$[ebp]
	mov	DWORD PTR [eax+112], ecx
; Line 21
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _Options$[ebp]
	mov	DWORD PTR [eax+116], ecx
; Line 23
	mov	eax, DWORD PTR _this$[ebp]
	fldz
	fstp	DWORD PTR [eax+68]
; Line 24
	mov	eax, DWORD PTR _this$[ebp]
	mov	cl, BYTE PTR _bShowLabel$[ebp]
	mov	BYTE PTR [eax+124], cl
; Line 27
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+84]
	push	ecx
	mov	edx, DWORD PTR _this$[ebp]
	mov	eax, DWORD PTR [edx+80]
	push	eax
	mov	ecx, DWORD PTR _this$[ebp]
	mov	edx, DWORD PTR [ecx+8]
	push	edx
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+4]
	push	ecx
	call	_GUI_MEMDEV_Create
	add	esp, 16					; 00000010H
	mov	edx, DWORD PTR _this$[ebp]
	mov	DWORD PTR [edx+140], eax
; Line 29
	mov	edi, DWORD PTR _this$[ebp]
	add	edi, 144				; 00000090H
	mov	ecx, 9
	lea	esi, DWORD PTR _fNumberFont$[ebp]
	rep movsd
; Line 30
	mov	edi, DWORD PTR _this$[ebp]
	add	edi, 180				; 000000b4H
	mov	ecx, 9
	lea	esi, DWORD PTR _fLabelFont$[ebp]
	rep movsd
; Line 32
	mov	ecx, DWORD PTR _this$[ebp]
	call	?GetMaxTextLength@DigitalDisplay@@AAEHXZ ; DigitalDisplay::GetMaxTextLength
	mov	ecx, DWORD PTR _this$[ebp]
	mov	DWORD PTR [ecx+120], eax
; Line 33
	mov	eax, DWORD PTR _this$[ebp]
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	128					; 00000080H
??0DigitalDisplay@@QAE@HHHHPAD0MMHHW4DigitalOptions@@PAVAlarm@@_NUGUI_FONT@@4J@Z ENDP ; DigitalDisplay::DigitalDisplay
_TEXT	ENDS
PUBLIC	?PickFont@DigitalDisplay@@AAEXXZ		; DigitalDisplay::PickFont
PUBLIC	??0DigitalDisplay@@QAE@HHHHPAD0MMHHW4DigitalOptions@@PAVAlarm@@_NJ@Z ; DigitalDisplay::DigitalDisplay
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ??0DigitalDisplay@@QAE@HHHHPAD0MMHHW4DigitalOptions@@PAVAlarm@@_NJ@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_xLoc$ = 8						; size = 4
_yLoc$ = 12						; size = 4
_xSize$ = 16						; size = 4
_ySize$ = 20						; size = 4
_sName$ = 24						; size = 4
_sUnits$ = 28						; size = 4
_dMin$ = 32						; size = 4
_dMax$ = 36						; size = 4
_iPrecision$ = 40					; size = 4
_iDividerLoc$ = 44					; size = 4
_Options$ = 48						; size = 4
_AlarmList$ = 52					; size = 4
_bShowLabel$ = 56					; size = 1
__hParent$ = 60						; size = 4
??0DigitalDisplay@@QAE@HHHHPAD0MMHHW4DigitalOptions@@PAVAlarm@@_NJ@Z PROC ; DigitalDisplay::DigitalDisplay, COMDAT
; _this$ = ecx
; Line 36
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
	mov	eax, DWORD PTR _AlarmList$[ebp]
	push	eax
	mov	ecx, DWORD PTR _sUnits$[ebp]
	push	ecx
	mov	edx, DWORD PTR _sName$[ebp]
	push	edx
	mov	eax, DWORD PTR _yLoc$[ebp]
	push	eax
	mov	ecx, DWORD PTR _xLoc$[ebp]
	push	ecx
	mov	ecx, DWORD PTR _this$[ebp]
	call	??0ControlBase@@QAE@HHPAD0PAVAlarm@@@Z	; ControlBase::ControlBase
; Line 37
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _xSize$[ebp]
	mov	DWORD PTR [eax+80], ecx
; Line 38
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _ySize$[ebp]
	mov	DWORD PTR [eax+84], ecx
; Line 39
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _iPrecision$[ebp]
	mov	DWORD PTR [eax+88], ecx
; Line 40
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR _dMin$[ebp]
	fstp	DWORD PTR [eax+72]
; Line 41
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR _dMax$[ebp]
	fstp	DWORD PTR [eax+76]
; Line 42
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _iDividerLoc$[ebp]
	mov	DWORD PTR [eax+112], ecx
; Line 43
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _Options$[ebp]
	mov	DWORD PTR [eax+116], ecx
; Line 45
	mov	eax, DWORD PTR _this$[ebp]
	fldz
	fstp	DWORD PTR [eax+68]
; Line 46
	mov	eax, DWORD PTR _this$[ebp]
	mov	cl, BYTE PTR _bShowLabel$[ebp]
	mov	BYTE PTR [eax+124], cl
; Line 48
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+84]
	push	ecx
	mov	edx, DWORD PTR _this$[ebp]
	mov	eax, DWORD PTR [edx+80]
	push	eax
	mov	ecx, DWORD PTR _this$[ebp]
	mov	edx, DWORD PTR [ecx+8]
	push	edx
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+4]
	push	ecx
	call	_GUI_MEMDEV_Create
	add	esp, 16					; 00000010H
	mov	edx, DWORD PTR _this$[ebp]
	mov	DWORD PTR [edx+140], eax
; Line 49
	mov	ecx, DWORD PTR _this$[ebp]
	call	?PickFont@DigitalDisplay@@AAEXXZ	; DigitalDisplay::PickFont
; Line 50
	mov	esi, DWORD PTR _this$[ebp]
	add	esi, 144				; 00000090H
	mov	edi, DWORD PTR _this$[ebp]
	add	edi, 180				; 000000b4H
	mov	ecx, 9
	rep movsd
; Line 52
	mov	ecx, DWORD PTR _this$[ebp]
	call	?GetMaxTextLength@DigitalDisplay@@AAEHXZ ; DigitalDisplay::GetMaxTextLength
	mov	ecx, DWORD PTR _this$[ebp]
	mov	DWORD PTR [ecx+120], eax
; Line 53
	mov	eax, DWORD PTR _this$[ebp]
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	56					; 00000038H
??0DigitalDisplay@@QAE@HHHHPAD0MMHHW4DigitalOptions@@PAVAlarm@@_NJ@Z ENDP ; DigitalDisplay::DigitalDisplay
_TEXT	ENDS
PUBLIC	??1DigitalDisplay@@QAE@XZ			; DigitalDisplay::~DigitalDisplay
EXTRN	_GUI_MEMDEV_Delete:PROC
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ??1DigitalDisplay@@QAE@XZ
_TEXT	SEGMENT
_this$ = -8						; size = 4
??1DigitalDisplay@@QAE@XZ PROC				; DigitalDisplay::~DigitalDisplay, COMDAT
; _this$ = ecx
; Line 56
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
; Line 57
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+140]
	push	ecx
	call	_GUI_MEMDEV_Delete
	add	esp, 4
; Line 58
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
??1DigitalDisplay@@QAE@XZ ENDP				; DigitalDisplay::~DigitalDisplay
_TEXT	ENDS
PUBLIC	?GetDisplayText@DigitalDisplay@@AAEPADXZ	; DigitalDisplay::GetDisplayText
PUBLIC	__$ArrayPad$
PUBLIC	?DrawControl@DigitalDisplay@@QAEXXZ		; DigitalDisplay::DrawControl
EXTRN	_GUI_DispStringInRect:PROC
EXTRN	_GUI_GetStringDistX:PROC
EXTRN	_strcpy:PROC
EXTRN	_GUI_SetColor:PROC
EXTRN	_GUI_SetFont:PROC
EXTRN	_GUI_SetTextMode:PROC
EXTRN	___security_cookie:DWORD
EXTRN	@__security_check_cookie@4:PROC
EXTRN	@_RTC_CheckStackVars@8:PROC
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?DrawControl@DigitalDisplay@@QAEXXZ
_TEXT	SEGMENT
_pAlarm$15428 = -104					; size = 4
_rect$ = -92						; size = 8
_Color$ = -76						; size = 4
_txt_diff$ = -64					; size = 4
_txt_length$ = -52					; size = 4
_strValue$ = -40					; size = 20
_this$ = -12						; size = 4
__$ArrayPad$ = -4					; size = 4
?DrawControl@DigitalDisplay@@QAEXXZ PROC		; DigitalDisplay::DrawControl, COMDAT
; _this$ = ecx
; Line 62
	push	ebp
	mov	ebp, esp
	sub	esp, 300				; 0000012cH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-300]
	mov	ecx, 75					; 0000004bH
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	mov	DWORD PTR __$ArrayPad$[ebp], eax
	mov	DWORD PTR _this$[ebp], ecx
; Line 65
	mov	DWORD PTR _Color$[ebp], 16777215	; 00ffffffH
; Line 68
	push	2
	call	_GUI_SetTextMode
	add	esp, 4
; Line 70
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 144				; 00000090H
	push	eax
	call	_GUI_SetFont
	add	esp, 4
; Line 71
	mov	eax, DWORD PTR _this$[ebp]
	cmp	DWORD PTR [eax+64], 0
	je	SHORT $LN9@DrawContro
; Line 74
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+64]
	mov	DWORD PTR _pAlarm$15428[ebp], ecx
$LN8@DrawContro:
; Line 75
	cmp	DWORD PTR _pAlarm$15428[ebp], 0
	je	SHORT $LN7@DrawContro
; Line 77
	mov	eax, DWORD PTR _pAlarm$15428[ebp]
	movzx	ecx, BYTE PTR [eax]
	cmp	ecx, 1
	jne	SHORT $LN6@DrawContro
; Line 79
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _pAlarm$15428[ebp]
	fld	DWORD PTR [ecx+4]
	fcomp	DWORD PTR [eax+68]
	fnstsw	ax
	test	ah, 65					; 00000041H
	jp	SHORT $LN5@DrawContro
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _pAlarm$15428[ebp]
	fld	DWORD PTR [ecx+8]
	fcomp	DWORD PTR [eax+68]
	fnstsw	ax
	test	ah, 1
	jne	SHORT $LN5@DrawContro
; Line 81
	mov	DWORD PTR _Color$[ebp], 0
; Line 82
	jmp	SHORT $LN7@DrawContro
; Line 84
	jmp	SHORT $LN4@DrawContro
$LN5@DrawContro:
; Line 86
	mov	DWORD PTR _Color$[ebp], 16777215	; 00ffffffH
$LN4@DrawContro:
; Line 89
	jmp	SHORT $LN3@DrawContro
$LN6@DrawContro:
; Line 91
	mov	DWORD PTR _Color$[ebp], 16777215	; 00ffffffH
$LN3@DrawContro:
; Line 94
	mov	eax, DWORD PTR _pAlarm$15428[ebp]
	mov	ecx, DWORD PTR [eax+24]
	mov	DWORD PTR _pAlarm$15428[ebp], ecx
; Line 95
	jmp	SHORT $LN8@DrawContro
$LN7@DrawContro:
; Line 97
	jmp	SHORT $LN2@DrawContro
$LN9@DrawContro:
; Line 99
	mov	DWORD PTR _Color$[ebp], 16777215	; 00ffffffH
$LN2@DrawContro:
; Line 102
	mov	eax, DWORD PTR _Color$[ebp]
	push	eax
	call	_GUI_SetColor
	add	esp, 4
; Line 104
	mov	ecx, DWORD PTR _this$[ebp]
	call	?GetDisplayText@DigitalDisplay@@AAEPADXZ ; DigitalDisplay::GetDisplayText
	push	eax
	lea	eax, DWORD PTR _strValue$[ebp]
	push	eax
	call	_strcpy
	add	esp, 8
; Line 105
	lea	eax, DWORD PTR _strValue$[ebp]
	push	eax
	call	_GUI_GetStringDistX
	add	esp, 4
	mov	DWORD PTR _txt_length$[ebp], eax
; Line 107
	mov	eax, DWORD PTR _this$[ebp]
	mov	cx, WORD PTR [eax+4]
	mov	WORD PTR _rect$[ebp], cx
; Line 108
	mov	eax, DWORD PTR _this$[ebp]
	mov	cx, WORD PTR [eax+8]
	mov	WORD PTR _rect$[ebp+2], cx
; Line 109
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, DWORD PTR _txt_length$[ebp]
	mov	WORD PTR _rect$[ebp+4], cx
; Line 110
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+8]
	mov	edx, DWORD PTR _this$[ebp]
	add	ecx, DWORD PTR [edx+84]
	mov	WORD PTR _rect$[ebp+6], cx
; Line 112
	mov	eax, DWORD PTR _this$[ebp]
	movzx	ecx, BYTE PTR [eax+124]
	test	ecx, ecx
	je	SHORT $LN1@DrawContro
; Line 114
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 12					; 0000000cH
	push	eax
	call	_GUI_GetStringDistX
	add	esp, 4
	mov	DWORD PTR _txt_diff$[ebp], eax
; Line 116
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 180				; 000000b4H
	push	eax
	call	_GUI_SetFont
	add	esp, 4
; Line 117
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, DWORD PTR _txt_diff$[ebp]
	mov	WORD PTR _rect$[ebp+4], cx
; Line 118
	push	13					; 0000000dH
	lea	eax, DWORD PTR _rect$[ebp]
	push	eax
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 12					; 0000000cH
	push	ecx
	call	_GUI_DispStringInRect
	add	esp, 12					; 0000000cH
; Line 119
	movsx	eax, WORD PTR _rect$[ebp+4]
	add	eax, 1
	mov	WORD PTR _rect$[ebp], ax
; Line 120
	mov	eax, DWORD PTR _this$[ebp]
	mov	esi, DWORD PTR [eax+4]
	mov	ecx, DWORD PTR _this$[ebp]
	add	esi, DWORD PTR [ecx+80]
	mov	edx, DWORD PTR _this$[ebp]
	add	edx, 37					; 00000025H
	push	edx
	call	_GUI_GetStringDistX
	add	esp, 4
	sub	esi, eax
	sub	esi, 5
	mov	WORD PTR _rect$[ebp+4], si
$LN1@DrawContro:
; Line 123
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 144				; 00000090H
	push	eax
	call	_GUI_SetFont
	add	esp, 4
; Line 124
	push	13					; 0000000dH
	lea	eax, DWORD PTR _rect$[ebp]
	push	eax
	lea	ecx, DWORD PTR _strValue$[ebp]
	push	ecx
	call	_GUI_DispStringInRect
	add	esp, 12					; 0000000cH
; Line 126
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 180				; 000000b4H
	push	eax
	call	_GUI_SetFont
	add	esp, 4
; Line 127
	movsx	eax, WORD PTR _rect$[ebp+4]
	add	eax, 5
	mov	WORD PTR _rect$[ebp], ax
; Line 128
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+4]
	mov	edx, DWORD PTR _this$[ebp]
	add	ecx, DWORD PTR [edx+80]
	mov	WORD PTR _rect$[ebp+4], cx
; Line 129
	push	13882323				; 00d3d3d3H
	call	_GUI_SetColor
	add	esp, 4
; Line 130
	push	12					; 0000000cH
	lea	eax, DWORD PTR _rect$[ebp]
	push	eax
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 37					; 00000025H
	push	ecx
	call	_GUI_DispStringInRect
	add	esp, 12					; 0000000cH
; Line 131
	push	16777215				; 00ffffffH
	call	_GUI_SetColor
	add	esp, 4
; Line 132
	push	edx
	mov	ecx, ebp
	push	eax
	lea	edx, DWORD PTR $LN15@DrawContro
	call	@_RTC_CheckStackVars@8
	pop	eax
	pop	edx
	pop	edi
	pop	esi
	pop	ebx
	mov	ecx, DWORD PTR __$ArrayPad$[ebp]
	xor	ecx, ebp
	call	@__security_check_cookie@4
	add	esp, 300				; 0000012cH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
	npad	2
$LN15@DrawContro:
	DD	2
	DD	$LN14@DrawContro
$LN14@DrawContro:
	DD	-40					; ffffffd8H
	DD	20					; 00000014H
	DD	$LN12@DrawContro
	DD	-92					; ffffffa4H
	DD	8
	DD	$LN13@DrawContro
$LN13@DrawContro:
	DB	114					; 00000072H
	DB	101					; 00000065H
	DB	99					; 00000063H
	DB	116					; 00000074H
	DB	0
$LN12@DrawContro:
	DB	115					; 00000073H
	DB	116					; 00000074H
	DB	114					; 00000072H
	DB	86					; 00000056H
	DB	97					; 00000061H
	DB	108					; 0000006cH
	DB	117					; 00000075H
	DB	101					; 00000065H
	DB	0
?DrawControl@DigitalDisplay@@QAEXXZ ENDP		; DigitalDisplay::DrawControl
_TEXT	ENDS
PUBLIC	__$ArrayPad$
EXTRN	_strlen:PROC
EXTRN	_sprintf:PROC
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?GetDisplayText@DigitalDisplay@@AAEPADXZ
_TEXT	SEGMENT
_strFormat$ = -76					; size = 20
_str$ = -48						; size = 25
_this$ = -12						; size = 4
__$ArrayPad$ = -4					; size = 4
?GetDisplayText@DigitalDisplay@@AAEPADXZ PROC		; DigitalDisplay::GetDisplayText, COMDAT
; _this$ = ecx
; Line 137
	push	ebp
	mov	ebp, esp
	sub	esp, 272				; 00000110H
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-272]
	mov	ecx, 68					; 00000044H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	mov	DWORD PTR __$ArrayPad$[ebp], eax
	mov	DWORD PTR _this$[ebp], ecx
; Line 140
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR [eax+76]
	sub	esp, 8
	fstp	QWORD PTR [esp]
	push	OFFSET $SG15443
	lea	ecx, DWORD PTR _str$[ebp]
	push	ecx
	call	_sprintf
	add	esp, 16					; 00000010H
; Line 141
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+88]
	push	ecx
	lea	edx, DWORD PTR _str$[ebp]
	push	edx
	call	_strlen
	add	esp, 4
	push	eax
	push	OFFSET $SG15444
	lea	eax, DWORD PTR _strFormat$[ebp]
	push	eax
	call	_sprintf
	add	esp, 16					; 00000010H
; Line 143
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR [eax+68]
	sub	esp, 8
	fstp	QWORD PTR [esp]
	lea	ecx, DWORD PTR _strFormat$[ebp]
	push	ecx
	mov	edx, DWORD PTR _this$[ebp]
	add	edx, 92					; 0000005cH
	push	edx
	call	_sprintf
	add	esp, 16					; 00000010H
; Line 145
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 92					; 0000005cH
; Line 146
	push	edx
	mov	ecx, ebp
	push	eax
	lea	edx, DWORD PTR $LN6@GetDisplay
	call	@_RTC_CheckStackVars@8
	pop	eax
	pop	edx
	pop	edi
	pop	esi
	pop	ebx
	mov	ecx, DWORD PTR __$ArrayPad$[ebp]
	xor	ecx, ebp
	call	@__security_check_cookie@4
	add	esp, 272				; 00000110H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
	npad	1
$LN6@GetDisplay:
	DD	2
	DD	$LN5@GetDisplay
$LN5@GetDisplay:
	DD	-48					; ffffffd0H
	DD	25					; 00000019H
	DD	$LN3@GetDisplay
	DD	-76					; ffffffb4H
	DD	20					; 00000014H
	DD	$LN4@GetDisplay
$LN4@GetDisplay:
	DB	115					; 00000073H
	DB	116					; 00000074H
	DB	114					; 00000072H
	DB	70					; 00000046H
	DB	111					; 0000006fH
	DB	114					; 00000072H
	DB	109					; 0000006dH
	DB	97					; 00000061H
	DB	116					; 00000074H
	DB	0
$LN3@GetDisplay:
	DB	115					; 00000073H
	DB	116					; 00000074H
	DB	114					; 00000072H
	DB	0
?GetDisplayText@DigitalDisplay@@AAEPADXZ ENDP		; DigitalDisplay::GetDisplayText
_TEXT	ENDS
PUBLIC	?SetValue@DigitalDisplay@@QAEXM@Z		; DigitalDisplay::SetValue
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?SetValue@DigitalDisplay@@QAEXM@Z
_TEXT	SEGMENT
_this$ = -8						; size = 4
_dValue$ = 8						; size = 4
?SetValue@DigitalDisplay@@QAEXM@Z PROC			; DigitalDisplay::SetValue, COMDAT
; _this$ = ecx
; Line 155
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
; Line 156
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR _dValue$[ebp]
	fstp	DWORD PTR [eax+68]
; Line 157
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	4
?SetValue@DigitalDisplay@@QAEXM@Z ENDP			; DigitalDisplay::SetValue
_TEXT	ENDS
PUBLIC	__$ArrayPad$
EXTRN	_strcat:PROC
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?GetMaxTextLength@DigitalDisplay@@AAEHXZ
_TEXT	SEGMENT
_str$ = -144						; size = 100
_old_value$ = -36					; size = 4
_txt_length$ = -24					; size = 4
_this$ = -12						; size = 4
__$ArrayPad$ = -4					; size = 4
?GetMaxTextLength@DigitalDisplay@@AAEHXZ PROC		; DigitalDisplay::GetMaxTextLength, COMDAT
; _this$ = ecx
; Line 160
	push	ebp
	mov	ebp, esp
	sub	esp, 340				; 00000154H
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-340]
	mov	ecx, 85					; 00000055H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	mov	DWORD PTR __$ArrayPad$[ebp], eax
	mov	DWORD PTR _this$[ebp], ecx
; Line 165
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 144				; 00000090H
	push	eax
	call	_GUI_SetFont
	add	esp, 4
; Line 167
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR [eax+68]
	fstp	DWORD PTR _old_value$[ebp]
; Line 168
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _this$[ebp]
	fld	DWORD PTR [ecx+76]
	fstp	DWORD PTR [eax+68]
; Line 169
	mov	eax, DWORD PTR _this$[ebp]
	movzx	ecx, BYTE PTR [eax+124]
	test	ecx, ecx
	je	SHORT $LN2@GetMaxText
; Line 170
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 12					; 0000000cH
	push	eax
	lea	ecx, DWORD PTR _str$[ebp]
	push	ecx
	call	_strcpy
	add	esp, 8
; Line 171
	jmp	SHORT $LN1@GetMaxText
$LN2@GetMaxText:
; Line 172
	push	OFFSET $SG15457
	lea	eax, DWORD PTR _str$[ebp]
	push	eax
	call	_strcpy
	add	esp, 8
$LN1@GetMaxText:
; Line 174
	mov	ecx, DWORD PTR _this$[ebp]
	call	?GetDisplayText@DigitalDisplay@@AAEPADXZ ; DigitalDisplay::GetDisplayText
	push	eax
	lea	eax, DWORD PTR _str$[ebp]
	push	eax
	call	_strcat
	add	esp, 8
; Line 176
	mov	eax, DWORD PTR _this$[ebp]
	fld	DWORD PTR _old_value$[ebp]
	fstp	DWORD PTR [eax+68]
; Line 178
	lea	eax, DWORD PTR _str$[ebp]
	push	eax
	call	_GUI_GetStringDistX
	add	esp, 4
	mov	DWORD PTR _txt_length$[ebp], eax
; Line 180
	mov	eax, DWORD PTR _txt_length$[ebp]
; Line 181
	push	edx
	mov	ecx, ebp
	push	eax
	lea	edx, DWORD PTR $LN7@GetMaxText
	call	@_RTC_CheckStackVars@8
	pop	eax
	pop	edx
	pop	edi
	pop	esi
	pop	ebx
	mov	ecx, DWORD PTR __$ArrayPad$[ebp]
	xor	ecx, ebp
	call	@__security_check_cookie@4
	add	esp, 340				; 00000154H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
	npad	1
$LN7@GetMaxText:
	DD	1
	DD	$LN6@GetMaxText
$LN6@GetMaxText:
	DD	-144					; ffffff70H
	DD	100					; 00000064H
	DD	$LN5@GetMaxText
$LN5@GetMaxText:
	DB	115					; 00000073H
	DB	116					; 00000074H
	DB	114					; 00000072H
	DB	0
?GetMaxTextLength@DigitalDisplay@@AAEHXZ ENDP		; DigitalDisplay::GetMaxTextLength
_TEXT	ENDS
EXTRN	_GUI_Font13_ASCII:BYTE
EXTRN	_GUI_Font16_ASCII:BYTE
EXTRN	_GUI_Font24B_ASCII:BYTE
EXTRN	_GUI_GetYDistOfFont:PROC
EXTRN	_GUI_Font32B_ASCII:BYTE
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?PickFont@DigitalDisplay@@AAEXXZ
_TEXT	SEGMENT
_txt_width$ = -32					; size = 4
_txt_height$ = -20					; size = 4
_this$ = -8						; size = 4
?PickFont@DigitalDisplay@@AAEXXZ PROC			; DigitalDisplay::PickFont, COMDAT
; _this$ = ecx
; Line 186
	push	ebp
	mov	ebp, esp
	sub	esp, 228				; 000000e4H
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-228]
	mov	ecx, 57					; 00000039H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	DWORD PTR _this$[ebp], ecx
; Line 190
	mov	edi, DWORD PTR _this$[ebp]
	add	edi, 144				; 00000090H
	mov	ecx, 9
	mov	esi, OFFSET _GUI_Font32B_ASCII
	rep movsd
; Line 191
	push	OFFSET _GUI_Font32B_ASCII
	call	_GUI_GetYDistOfFont
	add	esp, 4
	mov	DWORD PTR _txt_height$[ebp], eax
; Line 192
	mov	ecx, DWORD PTR _this$[ebp]
	call	?GetMaxTextLength@DigitalDisplay@@AAEHXZ ; DigitalDisplay::GetMaxTextLength
	mov	DWORD PTR _txt_width$[ebp], eax
; Line 193
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _txt_height$[ebp]
	cmp	ecx, DWORD PTR [eax+84]
	jge	SHORT $LN4@PickFont
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _txt_width$[ebp]
	cmp	ecx, DWORD PTR [eax+80]
	jge	SHORT $LN4@PickFont
; Line 195
	mov	edi, DWORD PTR _this$[ebp]
	add	edi, 144				; 00000090H
	mov	ecx, 9
	mov	esi, OFFSET _GUI_Font32B_ASCII
	rep movsd
; Line 196
	jmp	$LN5@PickFont
$LN4@PickFont:
; Line 199
	mov	edi, DWORD PTR _this$[ebp]
	add	edi, 144				; 00000090H
	mov	ecx, 9
	mov	esi, OFFSET _GUI_Font24B_ASCII
	rep movsd
; Line 200
	push	OFFSET _GUI_Font24B_ASCII
	call	_GUI_GetYDistOfFont
	add	esp, 4
	mov	DWORD PTR _txt_height$[ebp], eax
; Line 201
	mov	ecx, DWORD PTR _this$[ebp]
	call	?GetMaxTextLength@DigitalDisplay@@AAEHXZ ; DigitalDisplay::GetMaxTextLength
	mov	DWORD PTR _txt_width$[ebp], eax
; Line 202
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _txt_height$[ebp]
	cmp	ecx, DWORD PTR [eax+84]
	jge	SHORT $LN3@PickFont
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _txt_width$[ebp]
	cmp	ecx, DWORD PTR [eax+80]
	jge	SHORT $LN3@PickFont
; Line 204
	mov	edi, DWORD PTR _this$[ebp]
	add	edi, 144				; 00000090H
	mov	ecx, 9
	mov	esi, OFFSET _GUI_Font24B_ASCII
	rep movsd
; Line 205
	jmp	$LN5@PickFont
$LN3@PickFont:
; Line 208
	mov	edi, DWORD PTR _this$[ebp]
	add	edi, 144				; 00000090H
	mov	ecx, 9
	mov	esi, OFFSET _GUI_Font16_ASCII
	rep movsd
; Line 209
	push	OFFSET _GUI_Font16_ASCII
	call	_GUI_GetYDistOfFont
	add	esp, 4
	mov	DWORD PTR _txt_height$[ebp], eax
; Line 210
	mov	ecx, DWORD PTR _this$[ebp]
	call	?GetMaxTextLength@DigitalDisplay@@AAEHXZ ; DigitalDisplay::GetMaxTextLength
	mov	DWORD PTR _txt_width$[ebp], eax
; Line 211
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _txt_height$[ebp]
	cmp	ecx, DWORD PTR [eax+84]
	jge	SHORT $LN2@PickFont
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _txt_width$[ebp]
	cmp	ecx, DWORD PTR [eax+80]
	jge	SHORT $LN2@PickFont
; Line 213
	mov	edi, DWORD PTR _this$[ebp]
	add	edi, 144				; 00000090H
	mov	ecx, 9
	mov	esi, OFFSET _GUI_Font16_ASCII
	rep movsd
; Line 214
	jmp	SHORT $LN5@PickFont
$LN2@PickFont:
; Line 217
	mov	edi, DWORD PTR _this$[ebp]
	add	edi, 144				; 00000090H
	mov	ecx, 9
	mov	esi, OFFSET _GUI_Font13_ASCII
	rep movsd
; Line 218
	push	OFFSET _GUI_Font13_ASCII
	call	_GUI_GetYDistOfFont
	add	esp, 4
	mov	DWORD PTR _txt_height$[ebp], eax
; Line 219
	mov	ecx, DWORD PTR _this$[ebp]
	call	?GetMaxTextLength@DigitalDisplay@@AAEHXZ ; DigitalDisplay::GetMaxTextLength
	mov	DWORD PTR _txt_width$[ebp], eax
; Line 220
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _txt_height$[ebp]
	cmp	ecx, DWORD PTR [eax+84]
	jge	SHORT $LN1@PickFont
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _txt_width$[ebp]
	cmp	ecx, DWORD PTR [eax+80]
	jge	SHORT $LN1@PickFont
; Line 222
	mov	edi, DWORD PTR _this$[ebp]
	add	edi, 144				; 00000090H
	mov	ecx, 9
	mov	esi, OFFSET _GUI_Font13_ASCII
	rep movsd
; Line 223
	jmp	SHORT $LN5@PickFont
$LN1@PickFont:
; Line 226
	mov	edi, DWORD PTR _this$[ebp]
	add	edi, 144				; 00000090H
	mov	ecx, 9
	mov	esi, OFFSET _GUI_Font24B_ASCII
	rep movsd
$LN5@PickFont:
; Line 227
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 228				; 000000e4H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
?PickFont@DigitalDisplay@@AAEXXZ ENDP			; DigitalDisplay::PickFont
_TEXT	ENDS
PUBLIC	__$ArrayPad$
PUBLIC	?DrawToMemArea@DigitalDisplay@@QAEJXZ		; DigitalDisplay::DrawToMemArea
EXTRN	_GUI_SelectLCD:PROC
EXTRN	_GUI_DispStringAt:PROC
EXTRN	_GUI_GetYSizeOfFont:PROC
EXTRN	_GUI_FillRect:PROC
EXTRN	_GUI_ClearRect:PROC
EXTRN	_GUI_MEMDEV_Select:PROC
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT ?DrawToMemArea@DigitalDisplay@@QAEJXZ
_TEXT	SEGMENT
_pAlarm$15480 = -152					; size = 4
_rect$ = -140						; size = 8
_Color$ = -124						; size = 4
_BkColor$ = -112					; size = 4
_iTemp$ = -100						; size = 4
_y1$ = -88						; size = 4
_x1$ = -76						; size = 4
_txt_diff$ = -64					; size = 4
_txt_length$ = -52					; size = 4
_strValue$ = -40					; size = 20
_this$ = -12						; size = 4
__$ArrayPad$ = -4					; size = 4
?DrawToMemArea@DigitalDisplay@@QAEJXZ PROC		; DigitalDisplay::DrawToMemArea, COMDAT
; _this$ = ecx
; Line 230
	push	ebp
	mov	ebp, esp
	sub	esp, 348				; 0000015cH
	push	ebx
	push	esi
	push	edi
	push	ecx
	lea	edi, DWORD PTR [ebp-348]
	mov	ecx, 87					; 00000057H
	mov	eax, -858993460				; ccccccccH
	rep stosd
	pop	ecx
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	mov	DWORD PTR __$ArrayPad$[ebp], eax
	mov	DWORD PTR _this$[ebp], ecx
; Line 233
	mov	DWORD PTR _BkColor$[ebp], 0
	mov	DWORD PTR _Color$[ebp], 16777215	; 00ffffffH
; Line 235
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+140]
	push	ecx
	call	_GUI_MEMDEV_Select
	add	esp, 4
; Line 236
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+8]
	mov	edx, DWORD PTR _this$[ebp]
	add	ecx, DWORD PTR [edx+84]
	push	ecx
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+4]
	mov	edx, DWORD PTR _this$[ebp]
	add	ecx, DWORD PTR [edx+80]
	push	ecx
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+8]
	push	ecx
	mov	edx, DWORD PTR _this$[ebp]
	mov	eax, DWORD PTR [edx+4]
	push	eax
	call	_GUI_ClearRect
	add	esp, 16					; 00000010H
; Line 238
	push	2
	call	_GUI_SetTextMode
	add	esp, 4
; Line 240
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 144				; 00000090H
	push	eax
	call	_GUI_SetFont
	add	esp, 4
; Line 241
	mov	eax, DWORD PTR _this$[ebp]
	cmp	DWORD PTR [eax+64], 0
	je	$LN9@DrawToMemA
; Line 244
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+64]
	mov	DWORD PTR _pAlarm$15480[ebp], ecx
$LN8@DrawToMemA:
; Line 245
	cmp	DWORD PTR _pAlarm$15480[ebp], 0
	je	$LN7@DrawToMemA
; Line 247
	mov	eax, DWORD PTR _pAlarm$15480[ebp]
	movzx	ecx, BYTE PTR [eax]
	cmp	ecx, 1
	jne	SHORT $LN6@DrawToMemA
; Line 249
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _pAlarm$15480[ebp]
	fld	DWORD PTR [ecx+4]
	fcomp	DWORD PTR [eax+68]
	fnstsw	ax
	test	ah, 65					; 00000041H
	jp	SHORT $LN5@DrawToMemA
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR _pAlarm$15480[ebp]
	fld	DWORD PTR [ecx+8]
	fcomp	DWORD PTR [eax+68]
	fnstsw	ax
	test	ah, 1
	jne	SHORT $LN5@DrawToMemA
; Line 251
	mov	eax, DWORD PTR _pAlarm$15480[ebp]
	mov	ecx, DWORD PTR [eax+12]
	mov	DWORD PTR _BkColor$[ebp], ecx
; Line 252
	mov	DWORD PTR _Color$[ebp], 0
; Line 253
	jmp	SHORT $LN7@DrawToMemA
; Line 255
	jmp	SHORT $LN4@DrawToMemA
$LN5@DrawToMemA:
; Line 257
	mov	DWORD PTR _BkColor$[ebp], 0
; Line 258
	mov	DWORD PTR _Color$[ebp], 16777215	; 00ffffffH
$LN4@DrawToMemA:
; Line 261
	jmp	SHORT $LN3@DrawToMemA
$LN6@DrawToMemA:
; Line 263
	mov	DWORD PTR _BkColor$[ebp], 0
; Line 264
	mov	DWORD PTR _Color$[ebp], 16777215	; 00ffffffH
$LN3@DrawToMemA:
; Line 267
	mov	eax, DWORD PTR _pAlarm$15480[ebp]
	mov	ecx, DWORD PTR [eax+24]
	mov	DWORD PTR _pAlarm$15480[ebp], ecx
; Line 268
	jmp	$LN8@DrawToMemA
$LN7@DrawToMemA:
; Line 270
	jmp	SHORT $LN2@DrawToMemA
$LN9@DrawToMemA:
; Line 272
	mov	DWORD PTR _BkColor$[ebp], 0
; Line 273
	mov	DWORD PTR _Color$[ebp], 16777215	; 00ffffffH
$LN2@DrawToMemA:
; Line 276
	mov	eax, DWORD PTR _BkColor$[ebp]
	push	eax
	call	_GUI_SetColor
	add	esp, 4
; Line 277
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+8]
	mov	edx, DWORD PTR _this$[ebp]
	add	ecx, DWORD PTR [edx+84]
	push	ecx
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+4]
	mov	edx, DWORD PTR _this$[ebp]
	add	ecx, DWORD PTR [edx+80]
	push	ecx
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+8]
	push	ecx
	mov	edx, DWORD PTR _this$[ebp]
	mov	eax, DWORD PTR [edx+4]
	push	eax
	call	_GUI_FillRect
	add	esp, 16					; 00000010H
; Line 278
	mov	eax, DWORD PTR _Color$[ebp]
	push	eax
	call	_GUI_SetColor
	add	esp, 4
; Line 280
	mov	eax, DWORD PTR _this$[ebp]
	mov	eax, DWORD PTR [eax+84]
	cdq
	sub	eax, edx
	sar	eax, 1
	mov	ecx, DWORD PTR _this$[ebp]
	mov	esi, DWORD PTR [ecx+8]
	add	esi, eax
	mov	edx, DWORD PTR _this$[ebp]
	add	edx, 144				; 00000090H
	push	edx
	call	_GUI_GetYDistOfFont
	add	esp, 4
	cdq
	sub	eax, edx
	sar	eax, 1
	sub	esi, eax
	mov	DWORD PTR _y1$[ebp], esi
; Line 282
	mov	ecx, DWORD PTR _this$[ebp]
	call	?GetDisplayText@DigitalDisplay@@AAEPADXZ ; DigitalDisplay::GetDisplayText
	push	eax
	lea	eax, DWORD PTR _strValue$[ebp]
	push	eax
	call	_strcpy
	add	esp, 8
; Line 283
	lea	eax, DWORD PTR _strValue$[ebp]
	push	eax
	call	_GUI_GetStringDistX
	add	esp, 4
	mov	DWORD PTR _txt_length$[ebp], eax
; Line 285
	mov	eax, DWORD PTR _this$[ebp]
	mov	cx, WORD PTR [eax+4]
	mov	WORD PTR _rect$[ebp], cx
; Line 286
	mov	eax, DWORD PTR _this$[ebp]
	mov	cx, WORD PTR [eax+8]
	mov	WORD PTR _rect$[ebp+2], cx
; Line 287
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, DWORD PTR _txt_length$[ebp]
	mov	WORD PTR _rect$[ebp+4], cx
; Line 288
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+8]
	mov	edx, DWORD PTR _this$[ebp]
	add	ecx, DWORD PTR [edx+84]
	mov	WORD PTR _rect$[ebp+6], cx
; Line 290
	mov	eax, DWORD PTR _this$[ebp]
	movzx	ecx, BYTE PTR [eax+124]
	test	ecx, ecx
	je	$LN1@DrawToMemA
; Line 292
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 12					; 0000000cH
	push	eax
	call	_GUI_GetStringDistX
	add	esp, 4
	mov	DWORD PTR _txt_diff$[ebp], eax
; Line 294
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 180				; 000000b4H
	push	eax
	call	_GUI_SetFont
	add	esp, 4
; Line 295
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, DWORD PTR _txt_diff$[ebp]
	mov	WORD PTR _rect$[ebp+4], cx
; Line 296
	push	1
	lea	eax, DWORD PTR _rect$[ebp]
	push	eax
	mov	ecx, DWORD PTR _this$[ebp]
	add	ecx, 12					; 0000000cH
	push	ecx
	call	_GUI_DispStringInRect
	add	esp, 12					; 0000000cH
; Line 297
	movsx	eax, WORD PTR _rect$[ebp+4]
	add	eax, 1
	mov	WORD PTR _rect$[ebp], ax
; Line 298
	mov	eax, DWORD PTR _this$[ebp]
	mov	esi, DWORD PTR [eax+4]
	mov	ecx, DWORD PTR _this$[ebp]
	add	esi, DWORD PTR [ecx+80]
	mov	edx, DWORD PTR _this$[ebp]
	add	edx, 37					; 00000025H
	push	edx
	call	_GUI_GetStringDistX
	add	esp, 4
	sub	esi, eax
	sub	esi, 5
	mov	WORD PTR _rect$[ebp+4], si
$LN1@DrawToMemA:
; Line 301
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 144				; 00000090H
	push	eax
	call	_GUI_SetFont
	add	esp, 4
; Line 302
	movsx	esi, WORD PTR _rect$[ebp+4]
	lea	eax, DWORD PTR _strValue$[ebp]
	push	eax
	call	_GUI_GetStringDistX
	add	esp, 4
	sub	esi, eax
	sub	esi, 2
	mov	DWORD PTR _x1$[ebp], esi
; Line 303
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 180				; 000000b4H
	push	eax
	call	_GUI_GetYSizeOfFont
	add	esp, 4
	mov	DWORD PTR _txt_diff$[ebp], eax
; Line 304
	mov	eax, DWORD PTR _this$[ebp]
	mov	eax, DWORD PTR [eax+84]
	cdq
	sub	eax, edx
	sar	eax, 1
	mov	ecx, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [ecx+8]
	add	ecx, eax
	mov	eax, DWORD PTR _txt_diff$[ebp]
	cdq
	sub	eax, edx
	sar	eax, 1
	sub	ecx, eax
	mov	DWORD PTR _y1$[ebp], ecx
; Line 305
	mov	eax, DWORD PTR _this$[ebp]
	mov	eax, DWORD PTR [eax+84]
	cdq
	sub	eax, edx
	sar	eax, 1
	mov	ecx, DWORD PTR _this$[ebp]
	mov	edx, DWORD PTR [ecx+8]
	add	edx, eax
	add	edx, DWORD PTR _txt_diff$[ebp]
	mov	DWORD PTR _iTemp$[ebp], edx
; Line 306
	mov	eax, DWORD PTR _y1$[ebp]
	push	eax
	mov	ecx, DWORD PTR _x1$[ebp]
	push	ecx
	lea	edx, DWORD PTR _strValue$[ebp]
	push	edx
	call	_GUI_DispStringAt
	add	esp, 12					; 0000000cH
; Line 308
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 180				; 000000b4H
	push	eax
	call	_GUI_SetFont
	add	esp, 4
; Line 309
	movsx	eax, WORD PTR _rect$[ebp+4]
	add	eax, 5
	mov	WORD PTR _rect$[ebp], ax
; Line 310
	mov	eax, DWORD PTR _this$[ebp]
	mov	ecx, DWORD PTR [eax+4]
	mov	edx, DWORD PTR _this$[ebp]
	add	ecx, DWORD PTR [edx+80]
	mov	WORD PTR _rect$[ebp+4], cx
; Line 311
	push	13882323				; 00d3d3d3H
	call	_GUI_SetColor
	add	esp, 4
; Line 312
	movsx	eax, WORD PTR _rect$[ebp]
	mov	DWORD PTR _x1$[ebp], eax
; Line 313
	mov	eax, DWORD PTR _this$[ebp]
	add	eax, 180				; 000000b4H
	push	eax
	call	_GUI_GetYSizeOfFont
	add	esp, 4
	mov	ecx, DWORD PTR _iTemp$[ebp]
	sub	ecx, eax
	sub	ecx, 10					; 0000000aH
	mov	DWORD PTR _y1$[ebp], ecx
; Line 314
	mov	eax, DWORD PTR _y1$[ebp]
	push	eax
	mov	ecx, DWORD PTR _x1$[ebp]
	push	ecx
	mov	edx, DWORD PTR _this$[ebp]
	add	edx, 37					; 00000025H
	push	edx
	call	_GUI_DispStringAt
	add	esp, 12					; 0000000cH
; Line 315
	push	16777215				; 00ffffffH
	call	_GUI_SetColor
	add	esp, 4
; Line 317
	call	_GUI_SelectLCD
; Line 318
	mov	eax, DWORD PTR _this$[ebp]
	mov	eax, DWORD PTR [eax+140]
; Line 319
	push	edx
	mov	ecx, ebp
	push	eax
	lea	edx, DWORD PTR $LN15@DrawToMemA
	call	@_RTC_CheckStackVars@8
	pop	eax
	pop	edx
	pop	edi
	pop	esi
	pop	ebx
	mov	ecx, DWORD PTR __$ArrayPad$[ebp]
	xor	ecx, ebp
	call	@__security_check_cookie@4
	add	esp, 348				; 0000015cH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
	npad	1
$LN15@DrawToMemA:
	DD	2
	DD	$LN14@DrawToMemA
$LN14@DrawToMemA:
	DD	-40					; ffffffd8H
	DD	20					; 00000014H
	DD	$LN12@DrawToMemA
	DD	-140					; ffffff74H
	DD	8
	DD	$LN13@DrawToMemA
$LN13@DrawToMemA:
	DB	114					; 00000072H
	DB	101					; 00000065H
	DB	99					; 00000063H
	DB	116					; 00000074H
	DB	0
$LN12@DrawToMemA:
	DB	115					; 00000073H
	DB	116					; 00000074H
	DB	114					; 00000072H
	DB	86					; 00000056H
	DB	97					; 00000061H
	DB	108					; 0000006cH
	DB	117					; 00000075H
	DB	101					; 00000065H
	DB	0
?DrawToMemArea@DigitalDisplay@@QAEJXZ ENDP		; DigitalDisplay::DrawToMemArea
_TEXT	ENDS
END