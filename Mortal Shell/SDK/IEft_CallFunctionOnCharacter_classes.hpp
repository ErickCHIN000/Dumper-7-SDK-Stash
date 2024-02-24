#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x7C - 0x68)
// BlueprintGeneratedClass IEft_CallFunctionOnCharacter.IEft_CallFunctionOnCharacter_C
class UIEft_CallFunctionOnCharacter_C : public UBPItemEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bOnlyIfFamiliar;                                   // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDHCharacterFunction                  FunctionName;                                      // 0x74(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UIEft_CallFunctionOnCharacter_C* GetDefaultObj();

	void OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked);
	void ExecuteUbergraph_IEft_CallFunctionOnCharacter(int32 EntryPoint, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

}


