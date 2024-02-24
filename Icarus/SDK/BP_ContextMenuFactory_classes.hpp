#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x298 - 0x238)
// BlueprintGeneratedClass BP_ContextMenuFactory.BP_ContextMenuFactory_C
class ABP_ContextMenuFactory_C : public AContextMenuFactory
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ContextMenuClass;                                  // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                RadialMenuClass;                                   // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ContextMenuName;                                   // 0x258(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UTexture2D>             ContextMenuIcon;                                   // 0x270(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ContextMenuFactory_C* GetDefaultObj();

	void ShouldShow(bool* ShouldShow, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	class UContextMenuWidget* ShowAsRadialMenu(bool CallFunc_ShouldShow_ShouldShow, class UUMG_ContextMenu_Base_C* CallFunc_FinaliseMenu_ContextMenu);
	class UContextMenuWidget* ShowAsContextMenu(const struct FVector2D& ScreenPosition, bool CallFunc_ShouldShow_ShouldShow, bool CallFunc_IsZero2D_ReturnValue, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, class UUMG_ContextMenu_Base_C* CallFunc_FinaliseMenu_ContextMenu, class UUMG_ContextMenu_Base_C* CallFunc_FinaliseMenu_ContextMenu_1);
	void FinaliseMenu(class UClass* MenuClass, const struct FVector2D& ScreenPosition, class UUMG_ContextMenu_Base_C** ContextMenu, class UUMG_ContextMenu_Base_C* CallFunc_Create_ReturnValue);
	void SetContextMenuData(class FText& Name, TSoftObjectPtr<class UTexture2D>& Icon);
	void ExecuteUbergraph_BP_ContextMenuFactory(int32 EntryPoint, class FText K2Node_Event_Name, TSoftObjectPtr<class UTexture2D> K2Node_Event_Icon);
};

}


