#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x250 - 0x220)
// BlueprintGeneratedClass ba_InvestigationBoardLabelPositionTag.ba_InvestigationBoardLabelPositionTag_C
class Aba_InvestigationBoardLabelPositionTag_C : public AActor
{
public:
	class UStaticMeshComponent*                  Cube;                                              // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FText                                  LabelText;                                         // 0x230(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UWid_InvestigationBoard_Label_C*       LabelWidget;                                       // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_InvestigationBoardLabelPositionTag_C* GetDefaultObj();

};

}


