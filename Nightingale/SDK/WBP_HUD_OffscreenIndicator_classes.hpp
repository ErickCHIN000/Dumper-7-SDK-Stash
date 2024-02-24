#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x358 - 0x340)
// WidgetBlueprintGeneratedClass WBP_HUD_OffscreenIndicator.WBP_HUD_OffscreenIndicator_C
class UWBP_HUD_OffscreenIndicator_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          Stage;                                             // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUD_OffScreenMarker_C*            EncounterMarker;                                   // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_OffscreenIndicator_C* GetDefaultObj();

	void CreateOffscreenMarker(const struct FVector& ActorLocation, const struct FLinearColor& Colour);
	void RemoveMarker();
	void ExecuteUbergraph_WBP_HUD_OffscreenIndicator(int32 EntryPoint, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FVector& K2Node_CustomEvent_ActorLocation, const struct FLinearColor& K2Node_CustomEvent_Colour, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class UWBP_HUD_OffScreenMarker_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
};

}


