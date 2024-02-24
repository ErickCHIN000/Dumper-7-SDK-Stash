#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1A0 - 0x190)
// BlueprintGeneratedClass ArsenalChangePartsComponent.ArsenalChangePartsComponent_C
class UArsenalChangePartsComponent_C : public UTTLChangePartsComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x190(0x8)(Transient, DuplicateTransient)
	class AArsenalCharacter_C*                   OwnerArsenal;                                      // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UArsenalChangePartsComponent_C* GetDefaultObj();

	void OverrideArsenalPartsPaintInfo(enum class ETTLPartsType PartsType, const struct FTTLArsenalPartsPaintInfo& OverridePaintInfo, const struct FTTLArsenalPaintInfo& ArsenalPaintInfo, bool K2Node_SwitchEnum_CmpSuccess, const struct FTTLArsenalPaintInfo& K2Node_MakeStruct_TTLArsenalPaintInfo, const struct FTTLArsenalPaintInfo& K2Node_MakeStruct_TTLArsenalPaintInfo1, const struct FTTLArsenalPaintInfo& K2Node_MakeStruct_TTLArsenalPaintInfo2, const struct FTTLArsenalPaintInfo& K2Node_MakeStruct_TTLArsenalPaintInfo3, const struct FTTLArsenalPaintInfo& K2Node_MakeStruct_TTLArsenalPaintInfo4);
	void ChangeParts(class FName RowName, enum class ETTLPartsType PartsType, const struct FTTLArsenalPartsInfo& ChangePartsInfo, bool IsOverridePaintInfo, const struct FTTLArsenalPartsPaintInfo& OverridePaintInfo);
	void ReceiveBeginPlay();
	void InitPartsMeshReference();
	void ExecuteUbergraph_ArsenalChangePartsComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess);
};

}


