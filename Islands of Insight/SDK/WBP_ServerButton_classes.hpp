#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x84 (0x2E4 - 0x260)
// WidgetBlueprintGeneratedClass WBP_ServerButton.WBP_ServerButton_C
class UWBP_ServerButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            PingText;                                          // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerCountText;                                   // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ServerNameText;                                    // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   WBP_StyledButton;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  ServerName;                                        // 0x298(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  PlayerCount;                                       // 0x2B0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Ping;                                              // 0x2C8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        Index;                                             // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ServerButton_C* GetDefaultObj();

	void BndEvt__WBP_ServerButton_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature();
	void ExecuteUbergraph_WBP_ServerButton(int32 EntryPoint);
	void OnClicked__DelegateSignature(int32 Index);
};

}


