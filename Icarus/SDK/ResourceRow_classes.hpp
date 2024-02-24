#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x289 - 0x260)
// WidgetBlueprintGeneratedClass ResourceRow.ResourceRow_C
class UResourceRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_56;                                      // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ResourceName;                                      // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EIcarusResourceType               ResourceType;                                      // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UResourceRow_C* GetDefaultObj();

	void SetResource(enum class EIcarusResourceType ResourceType);
	void ExecuteUbergraph_ResourceRow(int32 EntryPoint, enum class EIcarusResourceType K2Node_CustomEvent_ResourceType, class FName CallFunc_GetEnumeratorName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue);
};

}


