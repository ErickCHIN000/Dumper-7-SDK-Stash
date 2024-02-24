#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4D (0x2AD - 0x260)
// WidgetBlueprintGeneratedClass W_ProjectionWidget.W_ProjectionWidget_C
class UW_ProjectionWidget_C : public UHuntingWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector2D                             MinSize;                                           // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             MaxSize;                                           // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SizeDistanceStart;                                 // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SizeDistanceEnd;                                   // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_UIProjectionComponent_C*           ProjectionActor;                                   // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Alignment;                                         // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CachedSize;                                        // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseAutoSizing;                                     // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2113[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinAutoSize;                                       // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxAutoSize;                                       // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseScreenEdge;                                     // 0x2A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2123[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScreenEdgeBuffer;                                  // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAtEdge;                                          // 0x2AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_ProjectionWidget_C* GetDefaultObj();

	void GetOpacityDistanceRanges(float* NearbyDistanceStart, float* NearbyDistanceEnd, bool CallFunc_IsValid_ReturnValue);
	void UpdateOpacityForDistance(float DistanceToActor, float OverrideValue, float CallFunc_GetOpacityDistanceRanges_NearbyDistanceStart, float CallFunc_GetOpacityDistanceRanges_NearbyDistanceEnd, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
	void RemoveWidget();
	void GetOverridePlacement(struct FVector2D* Location, float* ScaleAlpha, struct FVector2D* Alignment, bool* UseOpacity);
	bool ShouldUseOverride();
	void UpdateEdgeScreen(bool AtEdge);
	void TickEdgeScreen(const struct FVector2D& DirFromCentre);
	void SetProjectionActor(class UBP_UIProjectionComponent_C* ProjectionActor, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void UpdateVisuals();
	void TickWidget();
	void Construct();
	void Set_Scale(float Scale);
	void ExecuteUbergraph_W_ProjectionWidget(int32 EntryPoint, float K2Node_CustomEvent_Scale, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


