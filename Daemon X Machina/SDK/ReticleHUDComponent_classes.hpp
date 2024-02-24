#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E (0x136 - 0x108)
// BlueprintGeneratedClass ReticleHUDComponent.ReticleHUDComponent_C
class UReticleHUDComponent_C : public UTTLReticleHUDComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x108(0x8)(Transient, DuplicateTransient)
	bool                                         IsDraw;                                            // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_847[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CrossHair_Normal;                                  // 0x114(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CrossHair_Hit;                                     // 0x124(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnabled;                                         // 0x134(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  SightVisibilityCache;                              // 0x135(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UReticleHUDComponent_C* GetDefaultObj();

	void IsSight(bool* Disp, float* Alpha, uint8 CallFunc_MakeLiteralByte_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsSniperModeRestriction_ReturnValue, class UTTLGameInstance* K2Node_DynamicCast_AsTTLGame_Instance, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void SetSightVisibilityAlpha(enum class ESlateVisibility Visibility, float Alpha, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UUserWidget* CallFunc_GetHUD_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_00, bool K2Node_DynamicCast_bSuccess);
	void ChangeSight(enum class ETTLLockonSightType Type, const struct FVector2D& Size, class AActor* Owner, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetHUD_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UArsenalHUD2Component_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue2);
	void ChangeSightForDebug(int32 CurrentSight, bool K2Node_SwitchInteger_CmpSuccess);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_ReticleHUDComponent(int32 EntryPoint, bool CallFunc_IsSight_Disp, float CallFunc_IsSight_Alpha, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, float K2Node_Event_DeltaSeconds, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsInBaseCamp_ReturnValue);
};

}


