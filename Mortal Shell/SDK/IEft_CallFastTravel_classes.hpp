#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x78 - 0x68)
// BlueprintGeneratedClass IEft_CallFastTravel.IEft_CallFastTravel_C
class UIEft_CallFastTravel_C : public UBPItemEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FDHGameModeFunction                   FunctionName;                                      // 0x70(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UIEft_CallFastTravel_C* GetDefaultObj();

	void OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked);
	void ExecuteUbergraph_IEft_CallFastTravel(int32 EntryPoint, class ABarbarous_C* K2Node_Event_Barbarous, class AGameplayPC_C* K2Node_Event_GameplayPC, bool K2Node_Event_bFamiliarityUnlocked);
};

}


