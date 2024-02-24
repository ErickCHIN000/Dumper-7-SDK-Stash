#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x4A9 - 0x478)
// WidgetBlueprintGeneratedClass UMG_RecipeInput.UMG_RecipeInput_C
class UUMG_RecipeInput_C : public UUMG_RecipeElementBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BackgroundImage;                                   // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IconImage;                                         // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_RecipeItemAmount_C*               UMG_RecipeItemAmount;                              // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Selected;                                          // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Output;                                            // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_RecipeInput_C* GetDefaultObj();

	bool IsOutput();
	void CurrentAmountUpdated();
	void UpdateBackgroundImage(class UTexture2D* Texture, enum class EProcessorPreview Selected);
	void Intialise(const struct FItemData& NewItem, enum class EIcarusResourceType NewResourceType, int32 Multiplier, bool Output, TSoftObjectPtr<class UTexture2D> CallFunc_GetResourceImage_ReturnValue, bool CallFunc_IsResource_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UMG_RecipeInput(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
	void Selected__DelegateSignature(class UUMG_RecipeInput_C* SelectedRecipe);
};

}


