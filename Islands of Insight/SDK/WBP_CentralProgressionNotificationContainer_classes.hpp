#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x390 - 0x380)
// WidgetBlueprintGeneratedClass WBP_CentralProgressionNotificationContainer.WBP_CentralProgressionNotificationContainer_C
class UWBP_CentralProgressionNotificationContainer_C : public UCentralProgressionNotificationContainer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_SimpleNotificationWidget_C*       Show;                                              // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CentralProgressionNotificationContainer_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_CentralProgressionNotificationContainer(int32 EntryPoint);
};

}


