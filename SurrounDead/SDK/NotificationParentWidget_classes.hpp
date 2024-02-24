#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2C8 - 0x2C0)
// WidgetBlueprintGeneratedClass NotificationParentWidget.NotificationParentWidget_C
class UNotificationParentWidget_C : public UUserWidget
{
public:
	class UVerticalBox*                          VerticalBox_31;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNotificationParentWidget_C* GetDefaultObj();

	void Notification(const struct FS_NotificationDetails& NotificationDetails, class UNotficationUI_C* Notification, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UNotficationUI_C* K2Node_DynamicCast_AsNotfication_UI, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UNotficationUI_C* CallFunc_Create_ReturnValue);
};

}


