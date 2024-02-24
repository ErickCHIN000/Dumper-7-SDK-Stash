#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x258 (0x4B8 - 0x260)
// WidgetBlueprintGeneratedClass UMG_DropshipPartSmall.UMG_DropshipPartSmall_C
class UUMG_DropshipPartSmall_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Empty;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FItemData                             CurrentItem;                                       // 0x278(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FGameplayTagQuery                     Query;                                             // 0x468(0x48)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UUMG_DropshipEditor_Dropship_C*        EditorDropship;                                    // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_DropshipPartSmall_C* GetDefaultObj();

	void Initialise(class UUMG_DropshipEditor_Dropship_C* Parent);
	void UpdateState(const struct FRocketableData& CallFunc_GetRocketableData_Rocketable, enum class EDataValid CallFunc_GetRocketableData_Paths, bool K2Node_SwitchEnum_CmpSuccess, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1);
	void Update(const struct FItemData& Item);
	void OnLoaded_6FF29948471A55576D5E19A5F0534075(class UObject* Loaded);
	void LoadIcon(TSoftObjectPtr<class UTexture2D> Texture);
	void ExecuteUbergraph_UMG_DropshipPartSmall(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> K2Node_CustomEvent_Texture);
};

}


