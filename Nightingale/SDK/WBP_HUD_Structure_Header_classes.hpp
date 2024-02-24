#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x3B0 - 0x348)
// WidgetBlueprintGeneratedClass WBP_HUD_Structure_Header.WBP_HUD_Structure_Header_C
class UWBP_HUD_Structure_Header_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonLazyImage*                      CommonLazyImage_149;                               // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              StructureLimitContainer;                           // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_CompositeStructureLimit;                       // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_structureName;                                 // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_StructureName_Custom;                          // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_WaterStatus;                                   // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_Structure_Estate_C*           WBP_HUD_Structure_Estate;                          // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_Structure_HealthBar_C*        WBP_HUD_Structure_HealthBar;                       // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               StructureReference;                                // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                               WaterableObserver;                                 // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowName;                                         // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6C24[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxCompositePieceCountPerStructure;                // 0x3A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_StructureCompositeComponent_C*     CompositeStructureComponent;                       // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_Structure_Header_C* GetDefaultObj();

	void TryGetCompositeStructureComponent(TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, bool CallFunc_IsValid_ReturnValue, class UBP_StructureCompositeComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	void SetCompositeStructureLimit(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetPieceCount_ReturnValue, class UStructureSubsystem* CallFunc_GetStructureSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FRealmStructureCapInfo& CallFunc_GetRealmStructureCapInfo_ReturnValue);
	void RefreshCompositePieceCount(int32 PieceCount, bool CallFunc_Greater_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateStructure(class UObject* NewStructure, bool bShowName, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void BuildContainers();
	void OnCustomNameChanged(const class FString& Name, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnCanBeWateredChanged(bool CanBeWatered, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_Structure_Constructed_C* K2Node_DynamicCast_AsBP_Structure_Constructed, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class IWaterableObserver> K2Node_DynamicCast_AsWaterable_Observer, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2);
	void SetupBindings(bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IWaterableObserver> K2Node_DynamicCast_AsWaterable_Observer, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_Structure_Constructed_C* K2Node_DynamicCast_AsBP_Structure_Constructed, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void RefreshWidget(const struct FLinearColor& NameColor_Complete, const struct FLinearColor& NameColor_NotComplete);
	void RefreshCustomName(class ABP_Structure_Constructed_C* K2Node_DynamicCast_AsBP_Structure_Constructed, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetCustomizedPlayerName_OutName, bool CallFunc_IsValid_ReturnValue);
	void RefreshDisplayName(class FText LDisplayName, class FText Temp_text_Variable, TScriptInterface<class ISchematicInfoInterface> K2Node_DynamicCast_AsSchematic_Info_Interface, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetDisplayNameText_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void RefreshWatered(TScriptInterface<class IWaterableObserver> K2Node_DynamicCast_AsWaterable_Observer, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanBeWatered_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsStructureComplete_ReturnValue);
	void Destruct();
	void ExecuteUbergraph_WBP_HUD_Structure_Header(int32 EntryPoint);
};

}


