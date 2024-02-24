#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass FlammableComponentClassRow.FlammableComponentClassRow_C
class UFlammableComponentClassRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_56;                                      // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ClassName;                                         // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                Class;                                             // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFlammableComponentClassRow_C* GetDefaultObj();

	void SetClass(class UClass* FlammableClass);
	void ExecuteUbergraph_FlammableComponentClassRow(int32 EntryPoint, class UClass* K2Node_CustomEvent_FlammableClass, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


