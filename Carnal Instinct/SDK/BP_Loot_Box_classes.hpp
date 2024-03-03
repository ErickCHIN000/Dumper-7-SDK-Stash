#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x268 - 0x258)
// BlueprintGeneratedClass BP_Loot_Box.BP_Loot_Box_C
class ABP_Loot_Box_C : public ABP_BASE_INTERACTABLE_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBP_TargetIndicatorComponent_C*        BP_TargetIndicatorComponent;                       // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Loot_Box_C* GetDefaultObj();

	void Interaction();
	void End_Interaction();
	void Game_Load();
	void ExecuteUbergraph_BP_Loot_Box(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue);
};

}


