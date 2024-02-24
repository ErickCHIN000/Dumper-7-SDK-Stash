#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x3B0 - 0x340)
// WidgetBlueprintGeneratedClass WBP_HUD_Structure_Traits.WBP_HUD_Structure_Traits_C
class UWBP_HUD_Structure_Traits_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_TraitFadeIn;                                  // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWrapBox*                              TraitsBox;                                         // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               PlacementActorObject;                              // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<struct FGameplayTag, class UWBP_HUD_Structure_TraitEntry_C*> TraitsToWidgets;                                   // 0x360(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_HUD_Structure_Traits_C* GetDefaultObj();

	void RemoveTrait(const struct FStructureTrait& Trait, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class UWBP_HUD_Structure_TraitEntry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_RemoveChild_ReturnValue);
	void RefreshVisibility(bool CallFunc_HasAnyChildren_ReturnValue);
	void AddTrait(const struct FStructureTrait& NewTrait, bool bIsNegative, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_HUD_Structure_TraitEntry_C* CallFunc_Create_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_HUD_Structure_Traits(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


