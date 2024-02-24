#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x300 - 0x2F0)
// WidgetBlueprintGeneratedClass WBP_CenterToastNotificationContainer.WBP_CenterToastNotificationContainer_C
class UWBP_CenterToastNotificationContainer_C : public UCenterToastNotificationContainer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CenterMinorNotification_C*        Show;                                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CenterToastNotificationContainer_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_CenterToastNotificationContainer(int32 EntryPoint);
};

}


