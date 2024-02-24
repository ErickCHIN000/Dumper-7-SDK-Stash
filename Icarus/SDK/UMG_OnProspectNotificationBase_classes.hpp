#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass UMG_OnProspectNotificationBase.UMG_OnProspectNotificationBase_C
class UUMG_OnProspectNotificationBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          LifespanTimerHandle;                               // 0x268(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_OnProspectNotificationBase_C* GetDefaultObj();

	void SetLifeSpan(float LifeSpan);
	void DestroyWidget();
	void PauseNotification();
	void UnpauseNotification();
	void ExecuteUbergraph_UMG_OnProspectNotificationBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Lifespan, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


