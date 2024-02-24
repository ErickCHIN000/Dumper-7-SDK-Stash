#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x360 - 0x340)
// WidgetBlueprintGeneratedClass WBP_PlayerMapTrail.WBP_PlayerMapTrail_C
class UWBP_PlayerMapTrail_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FLinearColor                          TrailTint;                                         // 0x348(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapTrailProvider*                     Map_Trail_Provider;                                // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerMapTrail_C* GetDefaultObj();

	void OnPaint(struct FPaintContext& Context, const TArray<struct FVector2D>& ConvertedMapPoints, bool CallFunc_IsValid_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_PlayerMapTrail(int32 EntryPoint, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
};

}


