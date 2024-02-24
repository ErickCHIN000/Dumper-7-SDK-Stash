#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x68 - 0x0)
// UserDefinedStruct struct_DialogueStackDataRepository.struct_DialogueStackDataRepository
struct FStruct_DialogueStackDataRepository
{
public:
	TMap<class FName, struct FStruct_DialogueDataReference> DialogueData_20_B640668448AF390C3D7F9EA81567C74C;  // 0x0(0x50)(Edit, BlueprintVisible)
	bool                                         IsForced_30_C3A9282445E94CC7EAEEDB96DCFA864A;      // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_182D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Devdesc_15_2644174B47D8BBEC1CD116869EE46487;       // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};

}


