#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x450 - 0x348)
// WidgetBlueprintGeneratedClass WBP_BuildMode_ContextualAction.WBP_BuildMode_ContextualAction_C
class UWBP_BuildMode_ContextualAction_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonVisibilitySwitcher*             CommonVisibilitySwitcher;                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_Shadow;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InputActionPresentationWidget_C*  InputActionPresentationWidget;                     // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_action;                                        // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_SoftEdge_Divider_Vert_C* WBP_Component_SoftEdge_Divider_Vert;               // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonInputActionPresentation_C*  WBP_InputPresentationCommonUI;                     // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<TSoftObjectPtr<class UInputAction>, class UTexture2D*> ActionIcons;                                       // 0x388(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UInputAction>           InputAction;                                       // 0x3D8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<TSoftObjectPtr<class UInputAction>, class FText> ActionText;                                        // 0x400(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_BuildMode_ContextualAction_C* GetDefaultObj();

	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void Construct();
	void ExecuteUbergraph_WBP_BuildMode_ContextualAction(int32 EntryPoint, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, enum class ECommonInputType K2Node_Event_CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess);
};

}


