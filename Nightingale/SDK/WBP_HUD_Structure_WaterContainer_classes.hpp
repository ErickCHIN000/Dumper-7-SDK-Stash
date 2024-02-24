#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0x3A9 - 0x348)
// WidgetBlueprintGeneratedClass WBP_HUD_Structure_WaterContainer.WBP_HUD_Structure_WaterContainer_C
class UWBP_HUD_Structure_WaterContainer_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_blkgradient_bg;                                // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_water_empty;                                   // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_water_filled;                                  // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NWX_ProgressBar_C*                Progress_WaterRemaining;                           // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          Rb_water_level;                                    // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_2;                                     // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               StructureObj;                                      // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentWater;                                      // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaxWaterLevel;                                     // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               WaterCollectionObserver;                           // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                               WaterableObserver;                                 // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CanBeWatered;                                      // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_Structure_WaterContainer_C* GetDefaultObj();

	void OnCanBeWateredChanged(bool CanBeWatered);
	void RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IWaterableObserver> K2Node_DynamicCast_AsWaterable_Observer, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IResourceContainerObservable> K2Node_DynamicCast_AsResource_Container_Observable, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnWaterLevelChanged(float WaterLevel);
	void UpdateFuelPercentage(float FuelPercent);
	void RefreshWidget(double LWaterRemainingFraction, const struct FLinearColor& NameColor_Complete, const struct FLinearColor& NameColor_NotComplete, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsStructureComplete_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool Temp_bool_Variable_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
	void UpdateStructure(class UObject* NewStructure, class UObject* ContainerAccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IResourceContainerObservable> K2Node_DynamicCast_AsResource_Container_Observable, bool K2Node_DynamicCast_bSuccess, enum class EStructureResourceCollectionType CallFunc_GetResourceType_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSubclassOf<class IInterface> Temp_class_Variable_1, TScriptInterface<class IWaterableObserver> K2Node_DynamicCast_AsWaterable_Observer, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IWaterableObserver> K2Node_DynamicCast_AsWaterable_Observer_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CanBeWatered_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IResourceContainerObservable> K2Node_DynamicCast_AsResource_Container_Observable_1, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_GetMaxResourceLevel_ReturnValue, TScriptInterface<class IResourceContainerObservable> K2Node_DynamicCast_AsResource_Container_Observable_2, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IResourceContainerObservable> K2Node_DynamicCast_AsResource_Container_Observable_3, bool K2Node_DynamicCast_bSuccess_5, float CallFunc_GetResourceLevel_ReturnValue, TScriptInterface<class IResourceContainerAccess> K2Node_DynamicCast_AsResource_Container_Access, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IResourceContainerObservable> CallFunc_GetResourceContainerObservable_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double K2Node_VariableSet_MaxWaterLevel_ImplicitCast);
	void Destruct();
	void ExecuteUbergraph_WBP_HUD_Structure_WaterContainer(int32 EntryPoint);
};

}


