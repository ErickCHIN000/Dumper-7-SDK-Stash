#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x98 - 0x81)
// BlueprintGeneratedClass IEft_TokenOrnate.IEft_TokenOrnate_C
class UIEft_TokenOrnate_C : public UBPItemEffectDmgBlockedBase_C
{
public:
	uint8                                        Pad_1026[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTexture2D*                            IconAfterBlock;                                    // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UIEft_TokenOrnate_C* GetDefaultObj();

	void HandleOver();
	void OnDamageBlocked(class AActor* SourceActor, float Amount);
	void ExecuteUbergraph_IEft_TokenOrnate(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, float Temp_float_Variable_2, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, float Temp_float_Variable_3, float K2Node_Select_Default, int32 CallFunc_AddStatusIcon_IconID, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_Event_SourceActor, float K2Node_Event_Amount, float K2Node_Select_Default_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_IsFunctionBoundToDelegate_ReturnValue);
};

}


