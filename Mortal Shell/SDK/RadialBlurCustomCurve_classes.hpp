#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2408 - 0x23E8)
// BlueprintGeneratedClass RadialBlurCustomCurve.RadialBlurCustomCurve_C
class ARadialBlurCustomCurve_C : public AChameleon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x23E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        BlurStrength;                                      // 0x23F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_205C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           Curve;                                             // 0x23F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x2400(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        ElapsedTime;                                       // 0x2404(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ARadialBlurCustomCurve_C* GetDefaultObj();

	void SetBlurWithCurveValue(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_GetViewportSize_SizeX, int32 CallFunc_GetViewportSize_SizeY, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue);
	void UpdateTimeAndDestroyActorIfDurationHit(float DeltaTime, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnEquipmentMenuPressed(bool Close, enum class Enum_EquipmentMenuType Menu);
	void OnRadialBlurChanged(bool Enabled);
	void ExecuteUbergraph_RadialBlurCustomCurve(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool K2Node_CustomEvent_Close, enum class Enum_EquipmentMenuType K2Node_CustomEvent_Menu, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetRadialBlur_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool K2Node_CustomEvent_Enabled);
};

}


