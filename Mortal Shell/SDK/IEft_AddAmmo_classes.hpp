#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x74 - 0x68)
// BlueprintGeneratedClass IEft_AddAmmo.IEft_AddAmmo_C
class UIEft_AddAmmo_C : public UBPItemEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Amount;                                            // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UIEft_AddAmmo_C* GetDefaultObj();

	void OnPickUp(class FName ItemId, class AActor* PlayerCharacter);
	void ExecuteUbergraph_IEft_AddAmmo(int32 EntryPoint, class FName K2Node_Event_ItemID, class AActor* K2Node_Event_PlayerCharacter);
};

}


