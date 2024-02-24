#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x219 (0x479 - 0x260)
// WidgetBlueprintGeneratedClass UMG_FuelElement.UMG_FuelElement_C
class UUMG_FuelElement_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                IconImage;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Selected;                                          // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FItemData                             Item;                                              // 0x280(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)
	class AActor*                                NewLinkedActor;                                    // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EIcarusResourceType               ResourceType;                                      // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_FuelElement_C* GetDefaultObj();

	void UpdateState(enum class EProcessorPreview Selected, class UTexture2D* Texture, class UUMG_RecipeElementTooltip_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Intialise(const struct FItemData& NewItem, enum class EIcarusResourceType NewResourceType, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemableData& CallFunc_GetItemableStruct_Itemable_1, enum class EValid CallFunc_GetItemableStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UUMG_BasicTooltip_C* CallFunc_Create_ReturnValue);
	void Construct();
	void ExecuteUbergraph_UMG_FuelElement(int32 EntryPoint);
	void Selected__DelegateSignature(class UUMG_RecipeInput_C* SelectedRecipe);
};

}


