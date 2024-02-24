#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2342 (0x23E2 - 0xA0)
// BlueprintGeneratedClass PhotoModeComponent.PhotoModeComponent_C
class UPhotoModeComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPhotoModeWidget_C*                    PhotoModeWidgetRef;                                // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            PlayerRef;                                         // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   SpringArmRef;                                      // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      CameraRef;                                         // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         UsingPhotoMode_;                                   // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PauseGameWhenUsingPhotoMode_;                      // 0xC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E65[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           MenuColor;                                         // 0xCC(0x14)(Edit, BlueprintVisible)
	bool                                         ShowMouseCursorByDefault_;                         // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowPhotoResolutionOption_;                        // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowMouseCursorOption_;                            // 0xE2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FreeCameraOption_;                                 // 0xE3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E79[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FreeCameraMaximumDistance;                         // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMaximumDistanceLimit;                           // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FreeCameraSensitivity;                             // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMultiplayerGame_;                                // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstPersonGame_;                                // 0x101(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowTakePictureOption_;                            // 0x102(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ResetControlRotationAfterClosingPM;                // 0x103(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E9A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaxUpDownCameraDistance;                           // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxLeftRightCameraDistance;                        // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPhotoModeComponentGameLogo>   GameLogos;                                         // 0x118(0x10)(Edit, BlueprintVisible)
	TArray<struct FPostProcessPressets>          PostProcessPresets;                                // 0x128(0x10)(Edit, BlueprintVisible)
	double                                       DefaultFOV;                                        // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DefaultCameraRotation;                             // 0x140(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EBB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  DefaultPostProcess;                                // 0x160(0x6E0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UsingGallery_;                                     // 0x840(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EC6[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  DefaultPhotoModePostProcess;                       // 0x850(0x6E0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPostProcessSettings                  MenuPhotoModePostProcess;                          // 0xF30(0x6E0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FInputKeys                            TakeScreenshotKeys;                                // 0x1610(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            OpenGalleryKeys;                                   // 0x1640(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            HideMenuKeys;                                      // 0x1670(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            ResetValuesKeys;                                   // 0x16A0(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            NextTabKeys;                                       // 0x16D0(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            PrevTabKeys;                                       // 0x1700(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            OpenClosePhotoModeKeys;                            // 0x1730(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            ClosePhotoModeWithAnotherKey;                      // 0x1760(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            ShowOrHideMouseCursorKeys;                         // 0x1790(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            OpenFreeCameraKeys;                                // 0x17C0(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            UpCameraKeys;                                      // 0x17F0(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            DownCameraKeys;                                    // 0x1820(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         ApplyMenuColor;                                    // 0x1850(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F05[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPhotoModeComponentMenuIcons          KeyboardIcons;                                     // 0x1858(0x60)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPhotoModeComponentMenuIcons          Gamepad01Icons;                                    // 0x18B8(0x60)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPhotoModeComponentMenuIcons          Gamepad02Icons;                                    // 0x1918(0x60)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        GamepadIconStyle;                                  // 0x1978(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  LastKey;                                           // 0x1980(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	double                                       DefaultSpringArmLength;                            // 0x1998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseCursor;                                       // 0x19A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPostProcessRendering>         PostProcessRenders;                                // 0x19A8(0x10)(Edit, BlueprintVisible)
	struct FVector                               DefaultSocketOffset;                               // 0x19B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseCustomScreenshotFolder_;                        // 0x19D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F44[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomScreenshotFolderPath;                        // 0x19D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     PlayerControllerRef;                               // 0x19E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableGallery_;                                    // 0x19F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F4B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhotoModeGalleryWidget_C*             GalleryWidgetRef;                                  // 0x19F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         UsingPostProcessVolume_;                           // 0x1A00(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APostProcessVolume*                    PostProcessVolume;                                 // 0x1A08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FPhotoModeComponentGalleryIcons       KeyboardIcons__Gallery_;                           // 0x1A10(0x30)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPhotoModeComponentGalleryIcons       Gamepad01Icons__Gallery_;                          // 0x1A40(0x30)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPhotoModeComponentGalleryIcons       Gamepad02Icons__Gallery_;                          // 0x1A70(0x30)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputKeys                            NextPageKeys__Gallery_;                            // 0x1AA0(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            PrevPageKeys__Gallery_;                            // 0x1AD0(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            FullscreenKeys__Gallery_;                          // 0x1B00(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            BackKeys__Gallery_;                                // 0x1B30(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            ShowMouseKeys__Gallery_;                           // 0x1B60(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FPhotoModeIsOnConfis                  PhotoModeIsOnWarning;                              // 0x1B90(0x64)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2F82[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              DefaultControlRotation;                            // 0x1BF8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        PhotoModeViewportZOrder;                           // 0x1C10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExistingPostProcess;                               // 0x1C14(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F88[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                PostProcessVolumeClass;                            // 0x1C18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUnbound;                                         // 0x1C20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F8F[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  OriginalPostProcess;                               // 0x1C30(0x6E0)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       GlobalTimeDilationBackup;                          // 0x2310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EnumInputMode                     InputModeAfterClosingPhotoMode;                    // 0x2318(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowAlbumOption_;                                  // 0x2319(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F9F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentTimeDilation;                               // 0x2320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoSizePerTab;                                    // 0x2328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputKeys                            LeftCameraKeys;                                    // 0x2330(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            RightCameraKeys;                                   // 0x2360(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FInputKeys                            OpenPhotoModeKeys__Gallery_;                       // 0x2390(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            PhotoModeOpened;                                   // 0x23C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            PhotoModeClosed;                                   // 0x23D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ShowCharacterRotationOption_;                      // 0x23E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FocusWhenHoveringOverSlider;                       // 0x23E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPhotoModeComponent_C* GetDefaultObj();

	void UpdateOutputFolder(const class FString& Custom_Path, const class FString& CallFunc_Directory_Path_Correction_Corrected_Path, const class FString& CallFunc_NormalizeScreenshotPath_Normalized_Path);
	void GetCameraLocation(struct FVector* CameraLocation);
	void GetSliderCameraDistance(double* CameraDistance, float CallFunc_GetValue_ReturnValue, double K2Node_FunctionResult_CameraDistance_ImplicitCast);
	void GetSliderRoll(double* Roll, float CallFunc_GetValue_ReturnValue, double K2Node_FunctionResult_Roll_ImplicitCast);
	void GetSliderFOV(double* FOV, float CallFunc_GetValue_ReturnValue, double K2Node_FunctionResult_FOV_ImplicitCast);
	void GetPostProcessVolume(bool* IsValid, class APostProcessVolume** PostProcessVolume, class APostProcessVolume* HigherPostProcessVolume, double GreatestPriority, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class APostProcessVolume* K2Node_DynamicCast_AsPost_Process_Volume, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void UnpausedGameAxisMovementControl(double AxisValueIn, double* AxisValueOut, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue);
	void IconSelector_Minus_Gallery(const struct FKey& Key, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_Key_IsMouseButton_ReturnValue, bool CallFunc_Key_IsKeyboardKey_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void IconSelector_Minus_Photo_Mode_Menu(const struct FKey& Key, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_Key_IsMouseButton_ReturnValue, bool CallFunc_Key_IsKeyboardKey_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void ResetPhotoMode();
	void OpenGallery(const struct FKey& LastKey);
	void ResetGallery();
	void Initialization(class ACharacter* PlayerReference, class UCameraComponent* CameraComponentReference, class USpringArmComponent* SpringArmReference, class APlayerController*& PlayerController);
	void Photo_Mode(const struct FKey& Key);
	void ExecuteUbergraph_PhotoModeComponent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPhotoModeWidget_C* CallFunc_Create_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, bool CallFunc_GetPostProcessVolume_isValid, class APostProcessVolume* CallFunc_GetPostProcessVolume_PostProcessVolume, class UPhotoModeGalleryWidget_C* CallFunc_Create_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class APostProcessVolume* K2Node_DynamicCast_AsPost_Process_Volume, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable_1, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, const struct FPostProcessPressets& K2Node_MakeStruct_PostProcessPressets, const class FString& CallFunc_Directory_Path_Correction_Corrected_Path, const class FString& CallFunc_NormalizeScreenshotPath_Normalized_Path, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetGlobalTimeDilation_ReturnValue, float CallFunc_GetGlobalTimeDilation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character_1, bool CallFunc_IsValid_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character_2, bool Temp_bool_IsClosed_Variable, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_1, const struct FKey& K2Node_CustomEvent_LastKey, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_IsValid_ReturnValue_7, class ACharacter* K2Node_CustomEvent_PlayerReference, class UCameraComponent* K2Node_CustomEvent_CameraComponentReference, class USpringArmComponent* K2Node_CustomEvent_SpringArmReference, class APlayerController* K2Node_CustomEvent_PlayerController, float CallFunc_GetGlobalTimeDilation_ReturnValue_2, float CallFunc_GetGlobalTimeDilation_ReturnValue_3, const struct FKey& K2Node_CustomEvent_Key, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast, float K2Node_MakeStruct_Size_ImplicitCast, double K2Node_VariableSet_DefaultSpringArmLength_ImplicitCast, double K2Node_VariableSet_DefaultFOV_ImplicitCast, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast_1, float CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast, float K2Node_MakeStruct_Brightness_25_BEBC6EA248982279F9B091A036657DF0_ImplicitCast, float K2Node_VariableSet_TargetArmLength_ImplicitCast, double K2Node_VariableSet_CurrentTimeDilation_ImplicitCast, double K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast, double K2Node_VariableSet_CurrentTimeDilation_ImplicitCast_1, double K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast_1, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast_2);
	void PhotoModeClosed__DelegateSignature();
	void PhotoModeOpened__DelegateSignature(double CurrentTimeDilation);
};

}


