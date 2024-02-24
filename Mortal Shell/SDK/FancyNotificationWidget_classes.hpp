#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2B8 - 0x230)
// WidgetBlueprintGeneratedClass FancyNotificationWidget.FancyNotificationWidget_C
class UFancyNotificationWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeIn;                                            // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_Notification;                          // 0x240(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          DoNotTouchCanvas;                                  // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          NeverTouchEverRetainerBox;                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Pixelate;                              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_NotificationField;                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_NotificationType;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              RetainerMaterial;                                  // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Heading;                                           // 0x280(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Text;                                              // 0x298(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class AGameplayPC_C*                         GameplayPC;                                        // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFancyNotificationWidget_C* GetDefaultObj();

	enum class ESlateVisibility GetNotification_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	enum class ESlateVisibility Get_DoNotTouchCanvas_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	enum class ESlateVisibility Get_PutEverythingHereCanvas_Visibility(bool Local_IsInTutorial, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetRetainerEffectAlpha(float EffectAlpha, float Opacity);
	void ExecuteUbergraph_FancyNotificationWidget(int32 EntryPoint, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_CustomEvent_EffectAlpha, float K2Node_CustomEvent_Opacity, class FText CallFunc_CheckItemName_ReturnValue);
};

}


