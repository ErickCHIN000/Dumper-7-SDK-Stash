#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2D0 - 0x2B8)
// BlueprintGeneratedClass BP_PersistentEphemeralItemContainer.BP_PersistentEphemeralItemContainer_C
class ABP_PersistentEphemeralItemContainer_C : public ABP_EphemeralItemContainer_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGuid                                 UniqueID;                                          // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PersistentEphemeralItemContainer_C* GetDefaultObj();

	bool ShouldOptOutOfPersistenceStore();
	void OnLinkedReferencesRestored();
	void OnPersistentDataRestored();
	void ExecuteUbergraph_BP_PersistentEphemeralItemContainer(int32 EntryPoint);
};

}


