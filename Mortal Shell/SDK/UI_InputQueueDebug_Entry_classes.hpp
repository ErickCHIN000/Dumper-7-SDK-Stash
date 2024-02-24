#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x27C - 0x230)
// WidgetBlueprintGeneratedClass UI_InputQueueDebug_Entry.UI_InputQueueDebug_Entry_C
class UUI_InputQueueDebug_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Text_Entry;                                        // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Value;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  SetEntryText;                                      // 0x248(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  SetValueText;                                      // 0x260(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                        Duration;                                          // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_InputQueueDebug_Entry_C* GetDefaultObj();

	void Construct();
	void Timer();
	void ExecuteUbergraph_UI_InputQueueDebug_Entry(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


