#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHTNDecoratorTestResult : uint8
{
	Failed                         = 0,
	Passed                         = 1,
	NotTested                      = 2,
	EHTNDecoratorTestResult_MAX    = 3,
};

enum class EHTNDecoratorConditionCheckType : uint8
{
	PlanEnter                      = 0,
	PlanExit                       = 1,
	PlanRecheck                    = 2,
	Execution                      = 3,
	EHTNDecoratorConditionCheckType_MAX = 4,
};

enum class EHTNTaskFunction : uint8
{
	None                           = 0,
	CreatePlanSteps                = 1,
	RecheckPlan                    = 2,
	Execute                        = 3,
	Abort                          = 4,
	EHTNTaskFunction_MAX           = 5,
};

enum class EHTNTaskStatus : uint8
{
	Active                         = 0,
	Aborting                       = 1,
	Inactive                       = 2,
	EHTNTaskStatus_MAX             = 3,
};

enum class EHTNNodeResult : uint8
{
	Succeeded                      = 0,
	Failed                         = 1,
	Aborted                        = 2,
	InProgress                     = 3,
	EHTNNodeResult_MAX             = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x48 - 0x48)
// ScriptStruct HTN.EQSParametrizedQueryExecutionRequestHTN
struct FEQSParametrizedQueryExecutionRequestHTN : public FEQSParametrizedQueryExecutionRequest
{
public:
};

}


