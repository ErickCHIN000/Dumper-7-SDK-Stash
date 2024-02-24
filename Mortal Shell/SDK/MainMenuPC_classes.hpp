#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x5B8 - 0x570)
// BlueprintGeneratedClass MainMenuPC.MainMenuPC_C
class AMainMenuPC_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class Enum_UI_InputType                 Enum_InputType_MainMenu;                           // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E2B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mouse_X_Current;                                   // 0x57C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Mouse_X_Desired;                                   // 0x580(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E31[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            InputTypeChanged;                                  // 0x588(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCameraModifier_Brightness_C*          CameraModifier_Brightness;                         // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraModifier*                       CameraModifier_PixelMode;                          // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraModifier_FilmGrain_C*           CameraModifier_FilmGrain;                          // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraModifier_MotionBlur_C*          CameraModifier_MotionBlur;                         // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMainMenuPC_C* GetDefaultObj();

	void PCLoadingScreen_GetItemsDiscovered(TArray<class FName>* ItemsDiscovered, bool* Empty);
	void PCLoadingScreen_GetLoadingScreenInfo(const struct FInventoryItem& InventoryItem, int32* LocalFamiliarity, class FString* ItemEffectDescription);
	void UpdateCameraModifierMotionBlur(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance);
	void AddCameraModifierMotionBlur(class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue, class UCameraModifier_MotionBlur_C* K2Node_DynamicCast_AsCamera_Modifier_Motion_Blur, bool K2Node_DynamicCast_bSuccess);
	void AddCameraModifierBrightness(class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue, class UCameraModifier_Brightness_C* K2Node_DynamicCast_AsCamera_Modifier_Brightness, bool K2Node_DynamicCast_bSuccess);
	void AddCameraModifierFilmGrain(class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue, class UCameraModifier_FilmGrain_C* K2Node_DynamicCast_AsCamera_Modifier_Film_Grain, bool K2Node_DynamicCast_bSuccess);
	void AddCameraModifierPixelMode(class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue);
	void UpdateCameraModifierFilmGrain(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance);
	void UpdateCameraModifierPixelMode(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance);
	void UpdateCameraModifierBrightness(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance);
	void CameraModifier_UpdateFOV();
	void ReceiveBeginPlay();
	void CameraModifier_UpdateBrightness();
	void CameraModifier_UpdateFilmGrain();
	void CameraModifier_UpdatePixelMode();
	void CameraModifier_UpdateMotionBlur();
	void ExecuteUbergraph_MainMenuPC(int32 EntryPoint);
	void InputTypeChanged__DelegateSignature(enum class Enum_UI_InputType Input);
};

}


