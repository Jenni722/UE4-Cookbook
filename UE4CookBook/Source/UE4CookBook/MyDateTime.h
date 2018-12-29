// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyDateTime.generated.h"

/**
 * 
 */
UCLASS()
class UE4COOKBOOK_API UMyDateTime : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		static int32 SecondsBetweenDateTime(FDateTime time1, FDateTime time2);
	
};
