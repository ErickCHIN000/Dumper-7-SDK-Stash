#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x26C - 0x220)
// BlueprintGeneratedClass BP_RadialBlur.BP_RadialBlur_C
class ABP_RadialBlur_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 RadialBlurPP;                                      // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        EffectTimeline_EffectAlpha_3B98C5C44BB5BA01BAFDBF8048FC7860; // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectTimeline_BlurRadius_3B98C5C44BB5BA01BAFDBF8048FC7860; // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectTimeline_Gain_3B98C5C44BB5BA01BAFDBF8048FC7860; // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectTimeline_BlurDistance_3B98C5C44BB5BA01BAFDBF8048FC7860; // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EffectTimeline__Direction_3B98C5C44BB5BA01BAFDBF8048FC7860; // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_161[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EffectTimeline;                                    // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              M_RadialBlur;                                      // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Strength;                                          // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        BlendDirection;                                    // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        EffectTimelinePlayRate;                            // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_RadialBlur_C* GetDefaultObj();

	void EffectTimeline__FinishedFunc();
	void EffectTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void OnEquipmentMenuPressed(bool Close, enum class Enum_EquipmentMenuType Menu);
	void OnRadialBlurChanged(bool Enabled);
	void ExecuteUbergraph_BP_RadialBlur(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool K2Node_CustomEvent_Close, enum class Enum_EquipmentMenuType K2Node_CustomEvent_Menu, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetRadialBlur_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool K2Node_CustomEvent_Enabled);
};

}


