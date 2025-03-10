/*
 * This file and its contents are licensed under the Timescale License.
 * Please see the included NOTICE for copyright information and
 * LICENSE-TIMESCALE for a copy of the license.
 */
#ifndef TIMESCALEDB_TSL_CONTINUOUS_AGGS_CAGG_CREATE_H
#define TIMESCALEDB_TSL_CONTINUOUS_AGGS_CAGG_CREATE_H
#include <postgres.h>

#include <process_utility.h>
#include "with_clause_parser.h"
#include "ts_catalog/continuous_agg.h"

#define CONTINUOUS_AGG_CHUNK_ID_COL_NAME "chunk_id"

DDLResult tsl_process_continuous_agg_viewstmt(Node *stmt, const char *query_string, void *pstmt,
											  WithClauseResult *with_clause_options);

void cagg_update_view_definition(ContinuousAgg *agg, Hypertable *mat_ht);

#endif /* TIMESCALEDB_TSL_CONTINUOUS_AGGS_CAGG_CREATE_H */
