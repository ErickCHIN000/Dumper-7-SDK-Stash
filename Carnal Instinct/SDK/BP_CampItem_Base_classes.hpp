#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x269 - 0x260)
// BlueprintGeneratedClass BP_CampItem_Base.BP_CampItem_Base_C
class ABP_CampItem_Base_C : public ABP_QuestItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	enum class E_CampItems                       Camp_Item_Type;                                    // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CampItem_Base_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CampItem_Base(int32 EntryPoint);
};

}


