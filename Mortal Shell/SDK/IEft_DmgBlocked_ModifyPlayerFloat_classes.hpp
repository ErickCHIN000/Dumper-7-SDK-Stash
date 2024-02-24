#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xB9 - 0x81)
// BlueprintGeneratedClass IEft_DmgBlocked_ModifyPlayerFloat.IEft_DmgBlocked_ModifyPlayerFloat_C
class UIEft_DmgBlocked_ModifyPlayerFloat_C : public UBPItemEffectDmgBlockedBase_C
{
public:
	uint8                                        Pad_1049[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FDHPlayerDelegateName                 ResetDelegateName;                                 // 0x90(0x8)(Edit, BlueprintVisible, NoDestructor)
	bool                                         bResetDelegateInDmgNotifierComponent;              // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_104E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ValueIfFamiliar;                                   // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDHPlayerFloatName                    VariableName;                                      // 0xA4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        ValueAfterReset;                                   // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            IconAfterBlock;                                    // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDelta;                                            // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UIEft_DmgBlocked_ModifyPlayerFloat_C* GetDefaultObj();

	void HandleOver();
	void OnDamageBlocked(class AActor* SourceActor, float Amount);
	void ExecuteUbergraph_IEft_DmgBlocked_ModifyPlayerFloat(int32 EntryPoint, bool CallFunc_IsFunctionBoundToDelegate_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UObject* K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_AddStatusIcon_IconID, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_Event_SourceActor, float K2Node_Event_Amount);
};

}


